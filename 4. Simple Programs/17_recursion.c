#include <stdio.h>

int func(int k);

int main () {
   int sum = func(20);
   printf("Sum %d\n", sum);
   return 0;
}

int func (int k) {
   if (k > 0) {
     return k + func(k - 1);
   } else {
        return 0;
   }
}
