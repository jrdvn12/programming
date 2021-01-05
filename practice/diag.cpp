#include <bits/stdc++.h>
using namespace std;

int diagonalDifference(int arr[][100], int n) {
	int leftSum=0, rightSum=0;
	for(int i=0; i<n; i++) {
		leftSum+=arr[i][i];
		rightSum+=arr[i][n-i-1];
	}
	return abs(leftSum-rightSum);
}

int main() {
	int n;
	int sqr[100][100];
	cin >> n;
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cin >> sqr[i][j];
		}
	}
	cout << diagonalDifference(sqr, n);
}
