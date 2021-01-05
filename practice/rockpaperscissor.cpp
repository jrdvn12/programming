#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// rock paper scissor game by Jared

void userchoiceName(int n) {
	if(n==1) {
		cout << "You picked Rock" << '\n';
	} else if(n==2) {
		cout << "You picked Paper" << '\n';
	} else if(n==3) {
		cout << "You picked Scissor" << '\n';
	} else {
		cout << "Invalid Pick" << '\n';
	}
}

void compchoiceName(int n) {
	if(n==1) {
		cout << "Computer picked Rock" << '\n';
	} else if(n==2) {
		cout << "Computer picked Paper" << '\n';
	} else {
		cout << "Computer picked Scissor" << '\n';
	}
}

int logic(int a, int b) {
	if(a==b) {
		return 2;
	} else if(a==1&&b==2) {
		return 0;
	} else if(a==2&&b==3) {
		return 0;
	} else if(a==3&&b==1) {
		return 0;
	} else if(a==1&&b==3) {
		return 1;
	} else if(a==2&&b==1) {
		return 1;
	} else if(a==3&&b==2) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	srand(time(0));
	int userChoice, compChoice, r, userScore=0, compScore=0;
	cout << "Enter number of round(s): ";
	cin >> r;
	cout << "1 for Rock, 2 for Paper, 3 for Scissor" << '\n';
	for(int i=1; i<=r; i++) {
		cout << "Enter pick: ";
		cin >> userChoice;
		cin.ignore();
		userchoiceName(userChoice);
		compChoice=rand()%3+1;
		compchoiceName(compChoice);
		cout << endl;
		if(logic(userChoice, compChoice)==1) {
			cout << "You score" << '\n';
			userScore++;
		} else if(logic(userChoice, compChoice)==0) {
			cout << "Computer scores" << '\n';
			compScore++;
		} else {
			cout << "Tie" << '\n';
		}
		cout << endl;
		cout << "You: " << userScore << " | " << "Computer: " << compScore << '\n';
		cout << endl;
	}
	if(userScore>compScore) {
		cout << "You Win" << '\n';
	} else if(userScore<compScore) {
		cout << "Computer wins" << '\n';
	} else {
		cout << "Tie Game" << '\n';
	}
	cin.get();
}
