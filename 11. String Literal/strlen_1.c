#include <stdio.h>
#include <string.h>

int main() {
   int strlength;
   char str1[100];

   strcpy(str1, "Hello Man");
   strlength = strlen(str1);
   printf("Length of String is: %d\n", strlength);
}

