#include <bits/stdc++.h>
using namespace std;

int birthdayCakeCandles(vector<int> candles) {
	int max=1;
	for(int i=0; i<candles.size(); i++) {
		if(max<candles[i]) {
			max = candles[i];
		}
	}
	int count=0;
	for(int j=0; j<candles.size(); j++) {
		if(max==candles[j]) {
			count++;
		}
	}
	return count;
}

int main() {
	vector<int> candles;
	int n;
	cin >> n;

	for(int i=0; i<n; i++) {
		int a;
		cin >> a;
		candles.push_back(a);
	}
	cout << birthdayCakeCandles(candles);
}
