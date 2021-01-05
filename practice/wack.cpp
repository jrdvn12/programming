#include <bits/stdc++.h>
using namespace std;

#define ll long long

void print_backwards(vector<ll> ar) {
	for(int i=ar.size()-1; i>=0; i--) {
		cout << ar[i] << " ";
	}
}

int main() {
	vector<ll> v;
	int n;
	cin >> n;
	for(int i=1; i<=n; i++) {
		ll a;
		cin >> a;
		v.push_back(a);
	}
	print_backwards(v);

	return 0;
}
