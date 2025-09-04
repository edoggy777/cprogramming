#include <stdio.h>
#include <string.h>

int main() {
   char string1[100];
   int len;

   printf("Enter a sentence:\n");
   fgets(string1, sizeof(string1), stdin);
   string1[strcspn(string1, "\n")] = '\0';
   len = strlen(string1);
   printf("String %s is %d\n", string1, len);
}
