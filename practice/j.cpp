#include <bits/stdc++.h>
using namespace std;

void test() {
	int t1=0, t2=1, nt;
	int n;
	cin >> n;
	for(int i=1; i<=n; i++) {
		if(i==1) {
			cout << t1 << ' ';
			continue;
		}
		if(i==2) {
			cout << t2 << ' ';
			continue;
		}
		nt=t1+t2;
		t1=t2;
		t2=nt;
		cout << nt << ' ';
	}
	cout << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	for(int i=1; i<=n; i++) {
		cout << "Case #" << i << ": ";
		test();
	}
}
