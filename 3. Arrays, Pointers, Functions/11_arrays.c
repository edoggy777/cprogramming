#include <stdio.h>

int main () {
   int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

   int r;
   int c;
   
   for (c = 0; c < 3; c++) {
      printf("Matrix Position [%d][%d]: %d\n", r, c, matrix[r][c]);
   }  
      
   for (c = 0; c < 3; c++) {
      r = 1;
      printf("Matrix Position [%d][%d]: %d\n", r, c, matrix[r][c]);      
   }
}
