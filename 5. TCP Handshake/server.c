#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <unistd.h>
//udp lazy tcp lean and fast
// from google

int main() {
   int server_socket, new_socket;
   struct sockaddr_in server_addr, client_addr;
   socklen_t addr_size;
   char buffer[1024];

   // create socket
   server_socket = socket(AF_INET, SOCK_STREAM, 0);
   if (server_socket < 0) {
      perror("socket failed");
      exit(EXIT_FAILURE);
   }

   //config server addr
   server_addr.sin_family = AF_INET;
   server_addr.sin_port = htons(8000);
   server_addr.sin_addr.s_addr = INADDR_ANY;

   //bind
   if (bind(server_socket, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
      perror("bind failed");
      close(server_socket);
      exit(EXIT_FAILURE);
   }

   //listen for incoming
   if (listen(server_socket, 10) < 0) {
      perror("listen failed");
      close(server_socket);
      exit(EXIT_FAILURE);
   }
   printf("server is listening on port 8000:\n");

   //accept conn
   addr_size = sizeof(client_addr);
   new_socket = accept(server_socket, (struct sockaddr *)&client_addr, &addr_size);
   if (new_socket < 0) {
      perror("Accept failed");
      close(server_socket);
      exit(EXIT_FAILURE);
   }
   printf("client connected!.\n");

   //Data sent & recv
   recv(new_socket, buffer, sizeof(buffer), 0);
   printf("client message: %s\n", buffer);
   strcpy(buffer, "hello from server!");
   send(new_socket, buffer, strlen(buffer), 0);

   close(new_socket);
   close(server_socket);

   return 0;
}

