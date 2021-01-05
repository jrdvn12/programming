#include <iostream>
using namespace std;

void compareTriplets(int a[], int b[]) {
	int a1=0, b1=0;
	for(int i=0; i<3; i++) {
		if(a[i]>b[i]) {
			a1++;
		} else if(a[i]<b[i]) {
			b1++;
		} else {
			continue;
		}
	}
	cout << a1 << " " << b1 << '\n';
}

int main() {
	int a[3], b[3];
	for(int i=0; i<3; i++) {
		cin >> a[i];
	}
	for(int i=0; i<3; i++) {
		cin >> b[i];
	}
	compareTriplets(a, b);
}
