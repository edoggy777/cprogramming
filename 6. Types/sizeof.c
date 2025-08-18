#include <stdio.h>

int main () {
   printf("Size of int: %lu\n", sizeof(int));
   printf("Size of long: %lu\n", sizeof(long));
   printf("Size of long double: %zu\n", sizeof(long double));
   printf("Size of pointer: %zu\n", sizeof(void *));

   return 0;
}
