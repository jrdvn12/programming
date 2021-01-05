#include <iostream>
#include <vector>
using namespace std;

#define ll long long

int main() {
	vector<ll> v;
	int n;
	cin >> n;
	while(n--) {
		ll a;
		cin >> a;
		v.push_back(a);
	}
	for(int i : v) {
		cout << i << '\n';
	}
}
