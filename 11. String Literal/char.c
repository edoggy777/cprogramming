#include <stdio.h>


int main() {
   char ch;
   char sentence[100];
   int i = 0;

   printf("Enter a sentence: \n");

   while ((ch = getchar()) != '\n' && ch != EOF) {
      sentence[i++] = ch;
   }
   sentence[i] = '\0';
   printf("You typed: %s\n", sentence);
   
   return 0;
}
