#include <stdio.h>
#include <string.h>

int main() {

   char *string1, *string2;

   printf("Enter a sentence:\n");
   scanf("%s", string1);

   strcpy(string2, string1);
   printf("String 2: %s\n", string2);

   return 0;
}
