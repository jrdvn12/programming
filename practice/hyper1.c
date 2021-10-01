#include <stdio.h>

int main(void) {
	for(int x=0; x<10; x++) {
		for(int y=1; y<=5; y++) {
			printf("%3d", x);
		}
		printf("\n");
	}
}
