#include <stdio.h>

#define LEN

int main() {
   char str[LEN] = "Hello over there!";
   char *p;

   p = str;

   printf("%s\n", p);
}
