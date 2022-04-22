#include <iostream>
#include <iomanip>
#include "Header.h"
#include "Media.h"

using namespace std;


char PrintMenu() {
	char choice;
	int check = 0;

	while (check == 0) { // into a loop
		cout << " " << setw(40) << right << "Menu Choices" << " " << endl << endl;
		cout << "M - Print Movie List" << endl;
		cout << "B - Print Book List" << endl;
		cout << "S - Print Song List" << endl;
		cout << "A - Print All Media" << endl;
		cout << "F - Find the Movie the Star is in" << endl;
		cout << "G - Print Stars for a Given Movie" << endl;
		cout << "T - Print Media Counts" << endl;
		cout << "Q - Quit" << endl << endl;

		cout << "Enter your choice:";
		cin >> choice;

		switch (choice) { // checks switch to return any appropriet variable
		case 'M':
		case 'm':
		case 'B':
		case 'b':
		case 'S':
		case 's':
		case 'A':
		case 'a':
		case 'F':
		case 'f':
		case 'G':
		case 'g':
		case 'T':
		case 't':
		case 'Q':
		case 'q':
			check = 1; // changes check
			return choice; // returns choice and leaves function
		default: // if not correct continues back through while loop
			cout << "Not a valid choice. Please select again." << endl;
			break;
		}
	}


}