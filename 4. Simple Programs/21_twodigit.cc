#include <stdio.h>

int main () {

  int number;
  int mod;
  const char *digitone = "";
  const char *digittwo = "";

  printf("Enter a 2 digit number (10 - 99):\n");
  scanf("%d", &number);

  if (number == 11) {
     printf("eleven\n");
     return 0;
  } else if (number == 19) {
     printf("nineteen\n");
     return 0;
  } else if (number == 18) {
     printf("eighteen\n");
     return 0;
  } else if (number == 17) {
     printf("seventeen\n");
     return 0;
  } else if (number == 16) {
     printf("sixteen\n");
     return 0;
  } else if (number == 15) {
     printf("fifteen\n");
     return 0;
  } else if (number == 14) {
     printf("fourteen\n");
     return 0;
  } else if (number == 13) {
     printf("thirteen\n");
     return 0;
  } else if (number == 12) {
     printf("twelve\n");
     return 0;
  }

  if (number > 89 && number < 100) {
     digitone = "ninety";
  } else if (number > 79 && number < 90) {
     digitone = "eighty";
  } else if (number > 69 && number < 80) {
     digitone = "seventy";
  } else if (number > 59 && number < 70) {
     digitone = "sixty";
  } else if (number > 49 && number < 60) {
     digitone = "fifty";
  } else if (number > 39 && number < 50) {
     digitone = "forty";
  } else if (number > 29 && number < 40) {
     digitone = "thirty";
  } else if (number > 19 && number < 30) {
     digitone = "twenty";
  }
               
  mod = number % 10;

  if (mod == 1) {
     digittwo = "one";
  } else if (mod == 2) {
     digittwo = "two";
  } else if (mod == 3) {
     digittwo = "three";
  } else if (mod == 4) {
     digittwo = "four";
  } else if (mod == 5) {
     digittwo = "five";
  } else if (mod == 6) {
     digittwo = "six";
  } else if (mod == 7) {
     digittwo = "seven";
  } else if (mod == 8) {
     digittwo = "eight";
  } else if (mod == 9) {
     digittwo = "nine";
  }             

  printf("Your number is: %s%s\n", digitone, digittwo);

  return 0;
}
