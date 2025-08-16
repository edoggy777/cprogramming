#include <stdio.h>

int main () {
   int length;
   int width;
   int area;

   printf("================\n");
   printf("Area of a Square\n");
   printf("================\n");

   printf("Enter length:");
   scanf("%d", &length);
   printf("Enter width:");
   scanf("%d", &width);

   area = length * width;

   printf("Area is: %d\n", area);
}
