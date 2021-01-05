#include <iostream>
using namespace std;

#define ll long long

void test_case() {
	ll a, b, sum;
	cin >> a >> b;
	sum=a+b;
	cout << sum << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	for(int i=1; i<=n; i++) {
		cout << "Case #" << i << ": ";
		test_case();
	}
}
