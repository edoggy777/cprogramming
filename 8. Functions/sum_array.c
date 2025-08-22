#include <stdio.h>

int sum_array(int a[], int i);

int main() {
   int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
   int i;

   printf("Sum of 1 - 10: %d\n", sum_array(a, i));

   return 0;
}

int sum_array(int a[], int i) {
   int sum = 0;
   for (i = 0; i < 10; i++) {
      sum += a[i];
   }

   return sum;
}

