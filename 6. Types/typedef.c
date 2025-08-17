#include <stdio.h>

int main () {

   typedef long phonenumber;

   phonenumber number;

   printf("Your phonenumber is your password: \n");
   scanf("%ld", &number);

   if (number == 5555555) { 
      printf("Access Granted.\n"); 
      return 0;
   } else if (number != 5555555) {
      printf("Access Denied.\n");
      return 0;
   }
}
