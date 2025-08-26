#include <stdio.h>

// strace this for fun

int main() {
   int i = 0;

   do {
      printf("Value: %p\n", (void*)&i);
      i++;
   } while (i < 10);
}
