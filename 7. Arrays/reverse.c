#include <stdio.h>

int main () {
 int a[10];
 int i;

 printf("Enter numbers:\n");
 
 for (i = 0; i < 10; i++) {
    scanf("%d", &a[i]);
 }

 for (i = 9; i--;) {
    printf("%d\n", a[i]);
    if (i == 0) { break; }
 }
}
