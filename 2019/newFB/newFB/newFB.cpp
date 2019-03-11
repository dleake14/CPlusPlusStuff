#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <string>
using namespace std;

//MAIN PRINT METHOD
void print(string home, string away, int hscrInt, int ascrInt, string qtrNumStr)
{
	system("cls");
	string qtr = "QTR";
	string borders = "*********************************\n";
	int spac = 11;
	int w1, w2, w3, w12, w22, w32;
	int hmod = 1, hmod2 = 1;
	string hscr, ascr, qtrNum;
	hscr = to_string(hscrInt);
	ascr = to_string(ascrInt);
	qtrNum = qtrNumStr;
	//FORMAT CHECKER FOR HOME LABEL & SCORE
	if (home.length() % 2 == 0) {
		hmod = 0;
	}
	if (hscr.length() % 2 == 0) {
		hmod2 = 0;
	}
	//TOP BORDER
	cout << "Printer\n\n";
	cout << borders;
	//FIRST LINE OUTPUT
	w1 = ((((spac / 2) + 1) + (away.length() / 2)));
	w2 = ((((spac / 2) + 1) + (qtr.length() / 2)) + (spac - w1));
	w3 = ((((spac / 2) + hmod) + (home.length() / 2)) + ((spac - w1) + (spac - w2)));
	cout << setw(w1) << away << setw(w2) << qtr << setw(w3) << home << "\n";
	//SECOND LINE OUTPUT
	w12 = ((((spac / 2) + 1) + (ascr.length() / 2)));
	w22 = ((((spac / 2) + 1) + (qtrNum.length() / 2)) + (spac - w12));
	w32 = ((((spac / 2) + hmod2) + (hscr.length() / 2)) + ((spac - w12) + (spac - w22)));
	cout << setw(w12) << ascr << setw(w22) << qtrNum << setw(w32) << hscr;
	//BOTTOM BORDER
	cout << "\n";
	cout << borders;
}

//GET AWAY LABEL
string getAway() {
	invalidAway:
	cout << "\nWho is the away team?" << endl;
	string away = "";
	cin.clear();
	getline(cin, away);
	if (away.length() > 10) {
		cout << "Inalid Input" << endl;
		goto invalidAway;
	}
	return away;
}

//GET HOME LABEL
string getHome() {
	invalidHome:
	cout << "\nWho is the home team?" << endl;
	string home = "";
	cin.clear();
	getline (cin, home);
	if (home.length() > 10) {
		cout << "Inalid Input" << endl;
		goto invalidHome;
	}
	return home;
}

//GET HOME SCORE
int getHomeScore() {
	invalidHScore:
	cout << "\nHome Score?" << endl;
	int homeScore = -1;
	cin >> homeScore;
	if (homeScore > 99) {
		cout << "Inalid Input" << endl;
		goto invalidHScore;
	}
	return homeScore;
}

//GET AWAY SCORE
int getAwayScore() {
	invalidAScore:
	cout << "\nAway Score" << endl;
	int awayScore = -1;
	cin >> awayScore;
	if (awayScore > 99) {
		cout << "Inalid Input" << endl;
		goto invalidAScore;
	}
	return awayScore;
}

//OVERTIME EXCEPTION
string ot(int qtrNum) {
	if (qtrNum > 14) {
		string qtr = ("OT " + to_string(qtrNum - 4));
		return qtr;
	}
	string qtr = ("OT  " + to_string(qtrNum - 4));
	return qtr;
}

//GET QUARTER
string getQTR() {
	cout << "\nWhich QTR is it?" << endl;
	string qtrString = "";
	int qtr = -1;
	cin >> qtr;
	qtrString = to_string(qtr);
	if (qtr > 4) {
		qtrString = ot(qtr);
		return qtrString;
	}
	return qtrString;
}

//MAIN
int main()
{
	cout << "Program Started";
	string home, away; 
	home = getHome();
	away = getAway();
	for (int i = 0; i < 4; ++i) {
		int hscr = getHomeScore();
		int ascr = getAwayScore();
		string qtr = getQTR();

		print(home, away, hscr, ascr, qtr);
		cin.get();
	}
}