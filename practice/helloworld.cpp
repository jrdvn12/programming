#include <iostream>
using namespace std;

void solve() {
	float x, y;
	cin >> x >> y;
	float quo;
	quo=x/y;
	cout << quo << '\n';
}

int main () {
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
