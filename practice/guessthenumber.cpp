#include <bits/stdc++.h>
using namespace std;

int main() {
	srand(time(0));
	int guess;
	int tries;
	int guessLimit=7;
	int secretNum;
	secretNum=rand()%100+1;
	cout << "Guess the secret number between 1 and 100." << '\n';
	while(guess!=secretNum&&tries!=guessLimit) {
		cout << "Enter guess: ";
		cin >> guess;
		cin.ignore();
		tries++;
		if(guess>secretNum&&tries!=guessLimit) {
			cout << "Lower" << '\n';
		} else if (guess<secretNum&&tries!=guessLimit) {
			cout << "Higher" << '\n';
		}
	}
	if(guess==secretNum&&tries==1) {
		cout << "Correct! You got it in first guess." << '\n';
	} else if(guess==secretNum) {
		cout << "Correct! You got it in " << tries << " guesses." << '\n';
	} else if(guess==secretNum&&tries==guessLimit) {
		cout << "Correct! You got it in 7 guesses." << '\n';
	} else {
		cout << "Out of guesses." << '\n';
	}
	cin.get();
}
