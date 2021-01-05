#include <iostream>
using namespace std;

char matrix[3][3]={'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char play='X';
int p=1;

void print() {
	system("cls");
	cout << "Tic Tac Toe" << '\n';
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void player() {
	int pick=0;
	cout << "Player " << p << ": ";
	cin >> pick;
	switch(pick) {
		case 1:
			if(matrix[0][0]=='1') {
				matrix[0][0]=play;
			} else {
				cout << "Taken" << '\n';
				player();
			}
			break;
		case 2:
			if(matrix[0][1]=='2') {
				matrix[0][1]=play;
			} else {
				cout << "Taken" << '\n';
				player();
			}
			break;
		case 3:
			if(matrix[0][2]=='3') {
				matrix[0][2]=play;
			} else {
				cout << "Taken" << '\n';
				player();
			}
			break;
		case 4:
			if(matrix[1][0]=='4') {
				matrix[1][0]=play;
			} else {
				cout << "Taken" << '\n';
				player();
			}
			break;
		case 5:
			if(matrix[1][1]=='5') {
				matrix[1][1]=play;
			} else {
				cout << "Taken" << '\n';
				player();
			}
			break;
		case 6:
			if(matrix[1][2]=='6') {
				matrix[1][2]=play;
			} else {
				cout << "Taken" << '\n';
				player();
			}
			break;
		case 7:
			if(matrix[2][0]=='7') {
				matrix[2][0]=play;
			} else {
				cout << "Taken" << '\n';
				player();
			}
			break;
		case 8:
			if(matrix[2][1]=='8') {
				matrix[2][1]=play;
			} else {
				cout << "Taken" << '\n';
				player();
			}
			break;
		case 9:
			if(matrix[2][2]=='9') {
				matrix[2][2]=play;
			} else {
				cout << "Taken" << '\n';
				player();
			}
			break;
		default:
			cout << "Invalid" << '\n';
			player();
	}
}

char win() {
	if(matrix[0][0]=='X'&&matrix[0][1]=='X'&&matrix[0][2]=='X')
		return 'X';
	if(matrix[1][0]=='X'&&matrix[1][1]=='X'&&matrix[1][2]=='X')
		return 'X';
	if(matrix[2][0]=='X'&&matrix[2][1]=='X'&&matrix[2][2]=='X')
		return 'X';
	if(matrix[0][0]=='X'&&matrix[1][0]=='X'&&matrix[2][0]=='X')
		return 'X';
	if(matrix[0][1]=='X'&&matrix[1][1]=='X'&&matrix[2][1]=='X')
		return 'X';
	if(matrix[0][2]=='X'&&matrix[1][2]=='X'&&matrix[2][2]=='X')
		return 'X';
	if(matrix[0][0]=='X'&&matrix[1][1]=='X'&&matrix[2][2]=='X')
		return 'X';
	if(matrix[0][2]=='X'&&matrix[1][1]=='X'&&matrix[2][0]=='X')
		return 'X';
	if(matrix[0][0]=='O'&&matrix[0][1]=='O'&&matrix[0][2]=='O')
		return 'O';
	if(matrix[1][0]=='O'&&matrix[1][1]=='O'&&matrix[1][2]=='O')
		return 'O';
	if(matrix[2][0]=='O'&&matrix[2][1]=='O'&&matrix[2][2]=='O')
		return 'O';
	if(matrix[0][0]=='O'&&matrix[1][0]=='O'&&matrix[2][0]=='O')
		return 'O';
	if(matrix[0][1]=='O'&&matrix[1][1]=='O'&&matrix[2][1]=='O')
		return 'O';
	if(matrix[0][2]=='O'&&matrix[1][2]=='O'&&matrix[2][2]=='O')
		return 'O';
	if(matrix[0][0]=='O'&&matrix[1][1]=='O'&&matrix[2][2]=='O')
		return 'O';
	if(matrix[0][2]=='O'&&matrix[1][1]=='O'&&matrix[2][0]=='O')
		return 'O';

	return 'D';
}

void toggle() {
	if(play=='X')
		play='O';
	else
		play='X';

	if(p==1)
		p=2;
	else
		p=1;
}

int main() {
	int n=0;
	print();
	while(1) {
		player();
		n++;
		print();
		toggle();
		if(win()=='X') {
			cout << "Player 1 Wins" << '\n';
			break;
		} else if(win()=='O') {
			cout << "Player 2 Wins" << '\n';
			break;
		} else if(win()=='D'&&n==9) {
			cout << "Draw" << '\n';
			break;
		}
	}
	system("pause");
	return 0;
}
