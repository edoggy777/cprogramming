#include <stdio.h>

int main () {

   char ch[7];
   int i;
   int num[7];
   
   printf("Enter a 7 digit phone number in characters:\n");	   
   scanf("%7s", ch);
   
   for (i = 0; i < 7; i++) {
      if ((ch[i] == 'A' || ch[i] == 'B' || ch[i] == 'C') || (ch[i] == 'a' || ch[i] == 'b' || ch[i] == 'c')) { num[i] = 2; }
      if ((ch[i] == 'D' || ch[i] == 'E' || ch[i] == 'F') || (ch[i] == 'd' || ch[i] == 'e' || ch[i] == 'f')) { num[i] = 3; }
      if ((ch[i] == 'G' || ch[i] == 'H' || ch[i] == 'I') || (ch[i] == 'g' || ch[i] == 'h' || ch[i] == 'i')) { num[i] = 4; }
      if ((ch[i] == 'J' || ch[i] == 'K' || ch[i] == 'L') || (ch[i] == 'j' || ch[i] == 'k' || ch[i] == 'l')) { num[i] = 5; }
      if ((ch[i] == 'M' || ch[i] == 'N' || ch[i] == 'O') || (ch[i] == 'm' || ch[i] == 'n' || ch[i] == 'o')) { num[i] = 6; }
      if ((ch[i] == 'P' || ch[i] == 'Q' || ch[i] == 'R' || ch[i] == 'S') || (ch[i] == 'p' || ch[i] == 'q' || ch[i] == 'r' || ch[i] == 's')) { num[i] = 7; }
      if ((ch[i] == 'T' || ch[i] == 'U' || ch[i] == 'V') || (ch[i] == 't' || ch[i] == 'u' || ch[i] == 'v')) { num[i] = 8; }
      if ((ch[i] == 'W' || ch[i] == 'X' || ch[i] == 'Y' || ch[i] == 'Z') || (ch[i] == 'w' || ch[i] == 'x' || ch[i] == 'y' || ch[i] == 'z')) { num[i] = 9; }
   } 
   
   for (i = 0; i < 7; i++) {
      printf("%d", num[i]);
   }

   printf("\n");

   return 0;
}
