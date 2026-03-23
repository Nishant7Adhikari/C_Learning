#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

int main() {
    int server_fd, new_socket;
    struct sockaddr_in address;
    int addrlen = sizeof(address);
    char *hello = "HTTP/1.1 200 OK\nContent-Type: text/plain\nContent-Length: 12\n\nHello from C!";

    // 1. Create socket file descriptor
    server_fd = socket(AF_INET, SOCK_STREAM, 0);

    // 2. Set up the address structure
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(7070);

    // 3. Bind the socket to the port
    bind(server_fd, (struct sockaddr *)&address, sizeof(address));

    // 4. Start listening
    listen(server_fd, 3);
    printf("Server listening on port 7070...\n");

    while(1) {
        // 5. Accept a connection
        new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&addrlen);
        
        // 6. Send the HTTP response
        write(new_socket, hello, strlen(hello));
        
        // 7. Close the connection
        close(new_socket);
    }

    return 0;
}