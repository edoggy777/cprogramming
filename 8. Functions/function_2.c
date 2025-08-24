#include <stdio.h>

int main() {
   int a[10];
   int i;
   

   for (i = 0; i < 10; i++) {
      a[i] =+ i;
      printf("a[%d] is %d\n", i, a[i]);
   }
}
