// Media Lab.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "Header.h"
#include "Media.h"

using namespace std;

int main()
{
	vector<Book> bookV;
	vector <Movie> movieV;
	vector <Song> songV;

	char choice;


	ReadFile(bookV, movieV, songV);

	choice = PrintMenu();

	switch (choice) { // switch to send to proper function
	case 'M':
	case 'm':
	case 'B':
	case 'b':
		PrintBookList(bookV);
		break;
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
		break;
	default: // if not correct continues back through while loop
		cout << "Not a valid choice. Please select again." << endl;
		break;
	}

}