#include <stdio.h>

// Sort jobs according to their finish time
void sort(int start[], int finish[], int profit[], int n) {
	int i, j, temp1, temp2, temp3;
	for(i=0; i<n; i++) {
		for(j=i+1; j<n; j++) {
			if(finish[i]>finish[j]) {
				temp1=finish[i];
				finish[i]=finish[j];
				finish[j]=temp1;

				temp2=start[i];
				start[i]=start[j];
				start[j]=temp2;

				temp3=profit[i];
				profit[i]=profit[j];
				profit[j]=temp3;
			}
		}
	}
}

int max(int num1, int num2) {
	return (num1 > num2) ? num1 : num2;
}

int findMaxProfit(int start[], int finish[], int profit[], int n) {
	int i, j, t[100], maxProfit;

	t[0]=profit[0];
	for(i=1; i<n; i++) {
		t[i]=max(profit[i], t[i-1]);
		for(j=i-1; j>=0; j--) {
			if(finish[j]<=start[i]) {
				t[i]=max(t[i], profit[i]+t[j]);
			}
		}
	}

	maxProfit=t[0];
	for(int i=1; i<n; i++) {
		if(maxProfit<t[i]) {
			maxProfit=t[i];
		}
	}

	return maxProfit;
}

int main() {
	int t, n, start[100], finish[100], profit[100];

	printf("Enter number of test cases: ");
	scanf("%d", &t);

	while(t--) {
		printf("Enter number of jobs: ");
		scanf("%d", &n);

		printf("Enter job details:\n");
		for(int i=0; i<n; i++) {
			scanf("%d%d%d", &start[i], &finish[i], &profit[i]);
		}
		sort(start, finish, profit, n);
		printf("Maximum profit: %d\n", findMaxProfit(start, finish, profit, n));
	}
}
