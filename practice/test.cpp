#include <iostream>
using namespace std;

int main() {
	int x=5, y=4, z=9;
	if(y==7) { // this evaluates false because y=4
		if(x==5) {
			if(z==4) {
				x++;
			} else {
				z++;
			}
		} else {
			x--;
		}
	} else { // this executes instead
		y++;
	}
}
