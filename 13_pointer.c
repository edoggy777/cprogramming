#include <stdio.h>

int main () {
   int age;
   int *ptr = &age;

   printf("What is your age:\n");
   scanf("%d", &age);
   printf("Your age: %d\n", age);
   printf("Your age addr: %p\n", &age);
   printf("Your age ptr: %p\n", ptr);
   printf("Your age ptr: %d\n", *ptr);
}
