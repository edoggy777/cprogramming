#include <stdio.h>



int main() {
  int x, y[10], z, *ptr = &x;

  printf("Enter 10 numbers: ");
  
  for (x = 0; x < 10; x++) { 
     scanf("%d", &y[*ptr]);
  }

  for (x = 0; x < 10; x++) {
     if (y[x] == 5)
        z = 5;
  }

  if (z == 5)
     printf("Johnny 5 is alive.\n");   
}  
