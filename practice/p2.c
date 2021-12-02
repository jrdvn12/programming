#include <stdio.h>
#include <string.h>

int main() {
	char str[100], uniqueChar[100]="", tmp;
	int x=0; // used to increment 'uniqueChar' char array.

	printf("input your string: ");
	gets(str);

	// find unique characters in string 'str'.
	for(int i=0; i<strlen(str); i++) {
		int flag=0;
		for(int j=0; j<strlen(str); j++) {
			if(str[i]==str[j]&&i!=j) {
				flag=1;
				break;
			}
		}
		if(flag==0) {
			uniqueChar[x]=str[i];
			x++;
		}
	}

	// checks if unique characters string 'uniqueChar' is not empty.
	if(strlen(uniqueChar)!=0) {
		// sort unique characters string 'uniqueChar' in alphabetical order.
		for(int i=0; i<strlen(uniqueChar)-1; i++) {
			for(int j=i+1; j<strlen(uniqueChar); j++) {
				if(uniqueChar[i]>uniqueChar[j]) {
					tmp=uniqueChar[i];
					uniqueChar[i]=uniqueChar[j];
					uniqueChar[j]=tmp;
				}
			}
		}
	}

	printf("unique characters are: ");
	for(int i=0; i<strlen(uniqueChar); i++) {
		printf("%c ", uniqueChar[i]);
	}
	printf("\n");

	return 0;
}
