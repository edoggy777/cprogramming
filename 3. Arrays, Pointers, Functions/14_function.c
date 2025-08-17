#include <stdio.h>

void func () {
   printf("This is function func addr: %p\n", func);
}

int main () {
   func();
   return 0;
}
   
