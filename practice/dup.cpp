#include <bits/stdc++.h>
using namespace std;

void solve() {
	int a, b;
	cin >> a >> b;
	int sum = a + b;
	cout << sum;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for(int i=1; i<=n; i++) {
		cout << "Case #" << i << ": ";
		solve();
		cout << '\n';
	}
}
