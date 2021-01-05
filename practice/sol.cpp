#include <iostream>
#include <fstream>
using namespace std;

bool grade(int n) {
	if(n>=75) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	ifstream foo("test.txt");
	int a, b;
	string a1, b1;
	foo >> a1 >> a;
	foo >> b1 >> b;
	cout << a1 << ": " << (grade(a)?"Passed":"Failed") << '\n';
	cout << b1 << ": " << (grade(b)?"Passed":"Failed") << '\n';
	foo.close();
}
