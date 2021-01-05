#include <bits/stdc++.h>
using namespace std;

const int mxN=100;
void solve() {
	int n, d1=0, d2=0;
	int arr[mxN][mxN];
	cin >> n;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cin >> arr[i][j];
		}
	}
	for(int s=0; s<n; s++) {
		d1+=arr[s][s];
		d2+=arr[s][n-s-1];
	}
	cout << abs(d1-d2) << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, i=1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
}
