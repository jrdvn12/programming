#include <stdio.h>

int main() {
	int denom[3]={10, 5, 1};
	int m, ans=0;

	printf("Enter a number: ");
	scanf("%d", &m);
	
	printf("%d = ", m);
	while(m > 0) {
		for(int i=0; i<3; i++) {
			if(m - denom[i] >= 0) {
				m = m - denom[i];
				printf("%d", denom[i]);
				ans++;
				break;
			}
		}
		if(m > 0) {
			printf(" + ");
		}
	}
	printf("\nTotal of %d coin/s\n", ans);
}
