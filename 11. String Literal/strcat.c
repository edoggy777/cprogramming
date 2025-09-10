#include <stdio.h>
#include <string.h>

char *strcat(char *s1, const char *s2);

int main() {
	char sentence[19];
        strcpy(sentence, "hey man,");
	strcat(sentence, "hello");
	
	printf("%s\n", &sentence[0]);

	return 0;
}
