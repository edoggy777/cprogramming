#include <stdio.h>

int main () {
   char ch;
   int c = 0;

   printf("Enter a sentence:\n");
   while (scanf("%c", &ch) == 1) {
      if (ch == '\n') break;	   
      if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') { c++; } 
   }

   printf("Number of vowels: %d\n", c);

   return 0;
}
