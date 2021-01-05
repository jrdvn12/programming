#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll aVeryBigSum(vector<long> ar) {
	ll sum=0;
	for(int i=0; i<ar.size(); i++) {
		sum+=ar[i];
	}
	return sum;
}

int main() {
	int n;
	vector<long> ar;
	long input;
	cin >> n;
	while(n--) {
		cin >> input;
		ar.push_back(input);
	}
	cout << aVeryBigSum(ar) << '\n';
}
