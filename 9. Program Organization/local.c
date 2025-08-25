#include <stdio.h>

int main() {
   int i;
   int a[10];
   int val;

   printf("Variable Values:\n");
   
   for (i = 0; i < 10; i++) {
      a[i] = i;
      printf("a[%d] = %d\n", i, a[i]);
   }
   return 0;
}
      
