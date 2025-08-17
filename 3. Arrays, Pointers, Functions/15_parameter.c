#include <stdio.h>

void func (char name[]) {
   printf("function name: %s\n", name);
   printf("function addr: %p\n", &func);
}

int main () {
   func("edog");
   return 0;
}
