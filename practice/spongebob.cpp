#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	string s;
	getline(cin, s);
	system("cls");

	for(char i : s) {
		int n;
		n=rand()%2;
		if(n)
			putchar(toupper(i));
		else
			putchar(tolower(i));
	}
	cin.get();
}
