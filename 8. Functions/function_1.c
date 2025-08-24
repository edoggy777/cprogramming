#include <stdio.h>

int add(int x, int y, int z);

int main() {
  int x;
  int y;
  int z;

  printf("Enter 3 numbers:\n");
  scanf("%d\n%d\n%d", &x, &y, &z);

  printf("Result: %d\n", add(x, y, z));
}

int add(int x, int y, int z) {
   int result;

   result = x + y + z;

   return result;
}
