#include <stdio.h>

int main() {
	int x;
	int *p;
	int *q;
	int y[] = {1, 2, 3, 4, 5, 6};

        p = &y[0];
        q = &y[3];

        x = *p + *q;

        printf("%d\n", x);	

	return 0;
	}	
