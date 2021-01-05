#include <iostream>
using namespace std;

void solve() {
	bool flag=true;
	int n;
	cin >> n;
	if(n<=1) {
		cout << "Neither" << '\n';
	} else {
		for(int i=2; i<n/2; i++) {
			if(n%i==0) {
				flag=false;
				break;
			}
		}
		cout << (flag?"Prime":"Composite") << '\n';
	}
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
