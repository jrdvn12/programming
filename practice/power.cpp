#include <iostream>
using namespace std;

// 1^1 + 2^2 + 3^3 + ... = sum;

int main() {
	int n, i;
	cin >> n;
	int sum=0;
	for(i=1; i<=n; i++) {
		int res=1;
		for(int j=i; j>0; j--) {
			res*=i;
		}
		sum+=res;
	}
	cout << sum;
}
