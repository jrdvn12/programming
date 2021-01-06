#include <bits/stdc++.h>
using namespace std;

string timeConversion(string s) {
	if(s[0]=='1' && s[1]=='2' && (s.find("AM")) != string::npos) {
		s.replace(0, 2, "00");
	}
	if(s[0]=='0' && s[1]=='1' && (s.find("PM")) != string::npos) {
		s.replace(0, 2, "13");
	}
	if(s[0]=='0' && s[1]=='2' && (s.find("PM")) != string::npos) {
		s.replace(0, 2, "14");
	}
	if(s[0]=='0' && s[1]=='3' && (s.find("PM")) != string::npos) {
		s.replace(0, 2, "15");
	}
	if(s[0]=='0' && s[1]=='4' && (s.find("PM")) != string::npos) {
		s.replace(0, 2, "16");
	}
	if(s[0]=='0' && s[1]=='5' && (s.find("PM")) != string::npos) {
		s.replace(0, 2, "17");
	}
	if(s[0]=='0' && s[1]=='6' && (s.find("PM")) != string::npos) {
		s.replace(0, 2, "18");
	}
	if(s[0]=='0' && s[1]=='7' && (s.find("PM")) != string::npos) {
		s.replace(0, 2, "19");
	}
	if(s[0]=='0' && s[1]=='8' && (s.find("PM")) != string::npos) {
		s.replace(0, 2, "20");
	}
	if(s[0]=='0' && s[1]=='9' && (s.find("PM")) != string::npos) {
		s.replace(0, 2, "21");
	}
	if(s[0]=='1' && s[1]=='0' && (s.find("PM")) != string::npos) {
		s.replace(0, 2, "22");
	}
	if(s[0]=='1' && s[1]=='1' && (s.find("PM")) != string::npos) {
		s.replace(0, 2, "23");
	}
	s.erase(8, 2);
	return s;
}

int main() {
	string s;
	getline(cin, s);
	
	cout << timeConversion(s);
}
