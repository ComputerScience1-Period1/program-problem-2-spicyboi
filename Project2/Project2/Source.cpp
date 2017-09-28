/*
Isaiah Dunegan 9/26 P1
Assignment Name: Take in Data
Make a program that will take in and display data.*/

//Libraries
#include <iostream>
#include <conio.h>
//Namespaces
using namespace std; //*
//Functions
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << "\n;";
}
//MAIN
void main() {
	int fries;
	float pizza;
	double tea;
	cout << "How many fries does this computer contain for some strange reason\n";
	cin >> fries;
	cout << fries << endl;
	cout << "How much pizza does the average Italian consume per dog year?\n"; 
	cin >> pizza;
	cout << pizza << endl;
	cout << "How much does 2 large fountain drinks of Tea cost?\n";
	cin >> tea;
	cout << tea << endl; 
	pause();
}
