#include <iostream>
using namespace std;

int main() {
	int n=100;
	while(n<=200) {
		if(n%9==0) {
			cout << n << " ";
		}
		n++;
	}
	cout << endl;
}
