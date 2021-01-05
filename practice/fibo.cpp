#include <bits/stdc++.h>
using namespace std;

#define ll long long
// fibonacci sequence, nothing too special.
int main(){
	int n;
	ll t1=0;
	ll t2=1;
	cin >> n;
	for(int i=1; i<=n; i++) {
		ll nt;
		if(i==1) {
			cout << t1 << " ";
			continue;
		}
		if(i==2) {
			cout << t2 << " ";
			continue;
		}
		nt=t2+t1;
		cout << nt << " ";
		t1=t2;
		t2=nt;
	}
}
