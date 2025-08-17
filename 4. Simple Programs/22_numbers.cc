#include <stdio.h>

int main () {

   int num = 0;
   int numstore = 0;

   do {
      printf("Enter a number: ");
      scanf("%d", &num);
     
      if (num > 0 && num > numstore) {
         numstore = num;
      }
   } while (num > 0);
   
   printf("Largest Number: %d\n", numstore);
}
            
