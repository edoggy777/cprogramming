#include <stdio.h>

int sum(int x, int y, int z);

int main(void) {
   int x, y, z;

   printf("Enter 3 numbers:\n");
   scanf("%d%d%d", &x, &y, &z);
   printf("Sum of %d, %d, and %d: %d\n", x, y, z, sum(x, y, z));
}

int sum(int x, int y, int z) {
   return x + y + z;
}
