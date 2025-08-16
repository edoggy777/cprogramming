#include <stdio.h>

int main () {
   int x = 5;
   int y = 10;
   int z = 30;

   int sum = x + y + z;
   int product = ((x * y) * z);
   --sum;

   printf("Sum of %d, %d, and %d, is %d\n", x, y, z, sum);
   printf("Product of %d, %d, and %d, is %d\n", x, y, z, product);
   printf("Sum 45 decremented by 1 is %d\n", sum); 

}


