#include <stdio.h>
#include <stddef.h>

size_t str_len(const char *s) {
   size_t n;
   for (n = 0; *s != '\0'; s++)
      n++;
   return n;
}

int main(void) {
   const char *str = "hey there, whats up";

   printf("String: \"%s\" | Length: %zu\n", str, str_len(str));

   return 0;
}
