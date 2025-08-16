#include <stdio.h>

int main () {

   const int num1 = 077;
   const int num2 = 0x77;
   const int num3 = 0XABC;

   printf("Const for 077: %d\n", num1);
   printf("Const for 0x77: %d\n", num2);
   printf("Const for 0XABC: %d\n", num3);
 
   return 0;
}
