#include <stdio.h>
#include <stdbool.h>

int main () {
   int x = 2;
   int y = 3;
   int z = 4;

   printf("Is x(2) > y(3)?\n");

   if (x > y) {
      int var = true; 
      printf("Answer in bool: %d\n", var);
   } else {
      int var1 = false;	   
      printf("Answer in bool: %d\n", var1);
   }
} 
