#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <unistd.h>

int main () {
   int client_socket;
   struct sockaddr_in server_addr;
   char buffer[1024];

   //create socket
   client_socket = socket(AF_INET, SOCK_STREAM, 0);
   if (client_socket < 0) {
      perror("Socket creation failed");
      exit(EXIT_FAILURE);
   }

   // config
   server_addr.sin_family = AF_INET;
   server_addr.sin_port = htons(8000);
   inet_pton(AF_INET, "127.0.0.1", &server_addr.sin_addr);

   // Connect (handshake)
   if (connect(client_socket, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
      perror("Connection Failed");
      close(client_socket);
      exit(EXIT_FAILURE);
   }
   printf("Connected to Server.\n");

   // Send and Receive
   strcpy(buffer, "Yo");
   send(client_socket, buffer, strlen(buffer), 0);
   recv(client_socket, buffer, sizeof(buffer), 0);
   printf("Server Response: %s\n", buffer);

   close(client_socket);
   return 0;
}


