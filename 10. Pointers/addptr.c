#include <stdio.h>

int main() {
   int a[10], sum, i;
   int *x, *y;

   printf("Enter 10 numbers: ");
   
   for (i = 0; i < 10; i++) { 
      scanf("%d", &a[i]);
   }

   x = &a[2];
   y = &a[7];

   sum = *x + *y;

   printf("Sum of position 2 and position 7: %d\n", sum);
}

