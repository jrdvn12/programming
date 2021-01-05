#include <bits/stdc++.h>
using namespace std;

void plusMinus(vector<int> arr) {
	int ze=0, pos=0, neg=0;
	for(int i=0; i<arr.size(); i++) {
		if(arr[i]>0) {
			pos++;
		}
		if(arr[i]<0) {
			neg++;
		}
		if(arr[i]==0) {
			ze++;
		}
	}
	cout << fixed;
	cout << setprecision(6);
	cout << (double)pos/arr.size() << '\n';
	cout << (double)neg/arr.size() << '\n';
	cout << (double)ze/arr.size() << '\n';
}

int main() {
	vector<int> v;
	int n;
	cin >> n;
	while(n--) {
		int input;
		cin >> input;
		v.push_back(input);
	}
	plusMinus(v);
}
