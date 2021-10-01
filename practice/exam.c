#include <stdio.h>

int main(void) {
	char word[5];
	int i, j;
	i=0;
	do {
		word[i]='X';
		i++;
	} while (i<5);

	for(j=i; j<5; j++) {
		printf(" %c ", word[j]);
	}
}
