#include <iostream>
using namespace std;

void solve() {
	int x, y;
	int sum;
	cin >> x;
	cin >> y;
	sum=x+y;
	cout << sum << '\n';
}

int main() {
	ios::sync_with_stdio(NULL);
	cin.tie(0);

	int t, i=1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
}

