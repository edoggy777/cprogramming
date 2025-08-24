#include <stdio.h>

int main() {
   int a = 7;
   int b = 2;
   int result;
   float float_result;

   result = a / b;

   printf("Int result: %d\n", result);

   
   float_result = ((float) a) / b;

   printf("Float result: %f\n", float_result);
}

