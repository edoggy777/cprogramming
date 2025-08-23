#include <stdio.h>
#include <stdlib.h>

int check(int x, int y, int n) {
   if ((0 < x < (n-1)) && (0 < y < (n-1))) {
      return 1;
   } 

   return 0;
}

int main(void) {
   int a, b, c;

   printf("Enter a, b, c:\n");
   scanf("%d %d %d", &a, &b, &c);
   printf("Return: %d\n", check(a, b, c));
   return 0;
}
