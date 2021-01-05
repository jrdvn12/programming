#include <bits/stdc++.h>
using namespace std;

void update(int *a, int *b) {
	*a=6;
	*b=9;
}

int main() {
	int aa, bb;
	int *qq=&aa, *tt=&bb;
	cin >> aa >> bb;

	update(qq, tt);
	cout << aa << bb;
}
