#include <stdio.h>

int main() {
   char z, *r = &z;
   *r = 'c';

   printf("Value of z: %c\n", z);
   printf("Value of r: %c\n", *r);
   printf("Memory Addr of z: %p\n", &z);
}

