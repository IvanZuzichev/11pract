#include <iostream>
#include <string>
#include <windows.h>
#include "Show.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");

	int fst;
	int sec;
	cout << "Введите два целых числа: " << endl;
	cin >> fst;
	cin >> sec;
	cout << Show::show(fst, sec);

	double fst2;
	double sec2;
	cout << endl << "Введите два десятичных числа: " << endl;
	cin >> fst2;
	cin >> sec2;
	cout << Show::show(fst2, sec2);

	string fst3;
	string sec3;
	cout << endl << "Введите две строчки: " << endl;
	cin >> fst3;
	cin >> sec3;
	cout << Show::show(fst3, sec3);
}