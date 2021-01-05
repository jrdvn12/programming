#include <stdio.h>

int main(void) {
	int n, i;
	int sum=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		int res=1;
		int j=i;
		while(j--) {
			res*=i;
		}
		sum+=res;
	}
	printf("%d\n", sum);
}
