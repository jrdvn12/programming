#include <bits/stdc++.h>
using namespace std;

#define ll long long
void update(int* a, int* b) {
	*a=1;
	*b=1;
}

int main(){
	int a, b;
	int *subA=&a, *subB=&b;
	cin >> a >> b;
	update(subA, subB);
	cout << a << " " << b << '\n';
}
