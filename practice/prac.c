#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
const int max=1e5;

int main(void) {
	srand(time(0));
	char str[max];
	gets(str);

	for(int i=0; i<strlen(str); i++) {
		int n;
		n=rand()%2;
		if(n) {
			if(str[i]>=97&&str[i]<=122&&str[i]!=' ') {
				str[i]-=32;
			}
		} else {
			if(str[i]>=65&&str[i]<=90&&str[i]!=' ') {
				str[i]+=32;
			}
		}
	}
	printf("%s\n",str);
}
