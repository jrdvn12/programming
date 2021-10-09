#include <stdio.h>

int main() {
	int denom[3]={10, 5, 1};
	int m, ans=0;

	scanf("%d", &m);

	while(m > 0) {
		for(int i=0; i<3; i++) {
			if(m - denom[i] >= 0) {
				m = m - denom[i];
				ans++;
				break;
			}
		}
	}
	printf("%d\n", ans);
}
