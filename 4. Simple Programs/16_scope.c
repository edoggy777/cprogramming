#include <stdio.h>

void func(int x, int y) {
   int sum = x + y;

   printf("Sum is %d\n", sum);
   printf("Addr for sum is: %p\n", &sum);
}

int main () {
   int x;
   int y;

   printf("Value for x:\n");
   scanf("%d", &x);
   printf("Value for y:\n");
   scanf("%d", &y);

   func(x, y);

   return 0;
}
