#include <bits/stdc++.h>
using namespace std;

const int mxN=1e4;

int main() {
	int ar[mxN];
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> ar[i];
	}
	while(n--) {
		cout << ar[n] << " ";
	}
}
