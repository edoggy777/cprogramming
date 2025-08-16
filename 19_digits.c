#include <stdio.h>

int main () {
   int number;

   printf("Enter a number 1 - 999:\n");
   printf("Number: ");
   scanf("%d", &number);
   if (number > 999) {
      printf("Too Large\n");
   } else if (number < 0) {
      printf("Number too small\n");
   } else if (number < 9) {
      printf("Number has 1 digit\n");
   } else if (number > 9 && number < 100) {
      printf("Number has 2 digits\n");
   } else if (number > 99 && number < 1000) {
      printf("Number has 3 digits\n");
   }

   return 0;
} 
