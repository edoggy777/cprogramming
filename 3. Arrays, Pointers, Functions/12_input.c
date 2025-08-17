#include <stdio.h>

int main () {
   int num;

   printf("What number are you thinking?\n");
   scanf("%d", &num);
   printf("Your number is: %d\n", num);
   printf("Memory Address: %p\n", &num);
}
