// include the needed headers in windows
#if defined(_WIN32)
#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0600
#endif
#include <winsock2.h>
#include <ws2tcpip.h>
#pragma comment(lib, "ws2_32.lib")

// include the needed headers in unix
#else
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>
#include <errno.h>
#endif

// macros, which abstract out some of the difference between the Berkeley socket and Winsock APIs:
#if defined(_WIN32)
#define ISVALIDSOCKET(s) ((s) != INVALID_SOCKET)
#define CLOSESOCKET(s) closesocket(s)
#define GETSOCKETERROR() (WSAGetLastError())
#else
#define ISVALIDSOCKET(s) ((s) >= 0)
#define CLOSESOCKET(s) close(s)
#define SOCKET int
#define GETSOCKETERROR() (errno)
#endif

#include <time.h>
#include <stdio.h>
#include <string.h>

int main() {
    // initialize Winsock if we are compiling on Windows
    #if defined(_WIN32)
        WSADATA d;
        if (WSAStartup(MAKEWORD(2, 2), &d)) {
            fprintf(stderr, "Failed to initialize.\n");
            return 1;
        }
    #endif

    // figure out the local address that our web server should bind to:
    printf("Configuring local address...\n");
    struct addrinfo hints;
    memset(&hints, 0, sizeof(hints));
    hints.ai_family = AF_INET;              // specifies that we are looking for an IPv4 address.  We could use AF_INET6 to make our web server listen on an IPv6 address instead
    hints.ai_socktype = SOCK_STREAM;        // This indicates that we're going to be using TCP. SOCK_DGRAM would be used if we were doing a UDP server instead.
    hints.ai_flags = AI_PASSIVE;            // This is telling getaddrinfo() that we want it to bind to the wildcard address.

    struct addrinfo *bind_address;
    getaddrinfo(0, "8080", &hints, &bind_address);

    // Now that we've figured out our local address info, we can create the socket:
    printf("Creating socket...\n");
    SOCKET socket_listen;
    socket_listen = socket(bind_address -> ai_family, bind_address -> ai_socktype, bind_address -> ai_protocol);

    // We should check that the call to socket() was successful:
    if (!ISVALIDSOCKET(socket_listen)) {
        fprintf(stderr, "socket() failed. (%d)\n", GETSOCKETERROR());
        return 1;
    }

    // After the socket has been created successfully, we can call bind() to associate it with our address from getaddrinfo():
    printf("Binding socket to local address...\n");
    if (bind(socket_listen, bind_address -> ai_addr, bind_address -> ai_addrlen)) {
        fprintf(stderr, "bind() failed. (%d) \n", GETSOCKETERROR());
        return 0;
    }
    freeaddrinfo(bind_address);

    // start listening for connections with the listen() function:
    printf("Listening...\n");
    if (listen(socket_listen, 10) < 0) {
        fprintf(stderr, "listen() failed. (%d)\n", GETSOCKETERROR());
        return 0;
    }

    // accept any incoming connection with the accept() function:
    printf("Wating for connection...\n");
    struct sockaddr_storage client_address;
    socklen_t client_len = sizeof(client_address);
    SOCKET socket_client = accept(socket_listen, (struct sockaddr*) &client_address, &client_len);
    if (!ISVALIDSOCKET(socket_client)) {
        fprintf(stderr, "accept() failed. (%d)\n", GETSOCKETERROR());
        return 1;
    }

    //  print the client's address to the console:
    printf("Client is connected...\n");
    char address_buffer[100];
    getnameinfo((struct sockaddr*) &client_address, client_len, address_buffer, sizeof(address_buffer), 0, 0, NI_NUMERICHOST);
    printf("%s\n", address_buffer);

    printf("Reading request...\n");
    char request[1024];
    int bytes_recived = recv(socket_client, request, 1024, 0);
    printf("Recived %d bytes.\n", bytes_recived);
    printf("%.*s\n", bytes_recived, request);

    // Now that the web browser has sent its request, we can send our response back:
    printf("Sending response...\n");
    const char *response = 
        "HTTP/1.1 200 OK\r\n"
        "Connection: close\r\n"
        "Content-Type: text/html\r\n\r\n";
    int bytes_sent = send(socket_client, response, strlen(response), 0);
    printf("Sent %d of %d bytes\n", bytes_sent, (int)strlen(response));

    char *html = "<!DOCTYPE html><html><head><meta charset='utf-8'><meta name='viewport' content='width=device-width, initial-scale=1'><title>Simple HTTP Web Server From Scratch (C)</title><style>*{margin:0;padding 0;box-sizing:border-box}html,body{width:100%;height:100%;overflow:hidden;background-color:#fff}.box{position:absolute;top:-15%;left:50%;opacity:0;width:450px;padding:15px;border:1px solid;border-radius:10px;transform:translate(-50%,-50%);box-shadow:5px 5px 7px #0005;animation:1s cubic-bezier(0.29, 1.66, 0.45,-0.11) forwards sh}@keyframes sh{to{opacity:1;top:50%}}h1{font-size:35px;text-decoration:underline;padding-bottom:5px}p{font-size:17px;text-align:justify}</style></head><body><div class='box'><h1>Simple Web Server</h1><p>This is simple http web server using C (without external libraries). Here I use <b><i>Winsock</i></b> api for Window and <b><i>Berkeley socket</i></b> api for UNIX system.</p></div></body></html>";
    bytes_sent = send(socket_client, html, strlen(html), 0);
    printf("Sent %d of %d bytes.\n", bytes_sent, (int)strlen(html));

    // We must then close the client connection to indicate to the browser that we've sent all of our data
    printf("Closing connection...\n");
    CLOSESOCKET(socket_client);

    printf("Closing listening socket...\n");
    CLOSESOCKET(socket_listen);

    #if defined(_WIN32)
        WSACleanup();
    #endif

    printf("End.\n");
    return 0;
}