#include <stdio.h>

int main () {
   
   int income;
   int tax;

   printf("Enter Income:\n");
   scanf("%d", &income);

   if (income < 0) { 
      printf("Too small\n");
   } else if (income < 751) { 
      tax = income * .01;
      printf("Tax: %d\n", tax);
   } else if (income > 750 && income < 2251) {
      tax = ((income - 750) * .02) + 7.50;
      printf("Tax: %d\n", tax);
   } else if (income > 2249 && income < 3751) {
      tax = ((income - 2250) * .03) + 37.50;
      printf("Tax: %d\n", tax);
   } else if (income > 3749 && income < 5251) { 
      tax = ((income - 3750) * .04) + 82.50;
      printf("Tax: %d\n", tax);
   } else if (income > 5249 && income < 7001) { 
      tax = ((income - 5250) * .05) + 142.50;
      printf("Tax: %d\n", tax);
   } else if (income > 7000) { 
      tax = ((income - 7000) * .06) + 230;
      printf("Tax: %d\n", tax);
   }

   return 0;
}


      
