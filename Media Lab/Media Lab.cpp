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
	vector<Media*> mediaLib;
	ifstream inFile ("mediaList.txt");
	ofstream outFile("output.txt");

	char choice;


	ReadFile(inFile, outFile, mediaLib);

	choice = PrintMenu();
	while (choice != 'q' && choice != 'Q') {
		switch (choice) { // switch to send to proper function
			case 'M':
			case 'm':
				PrintMovieList(mediaLib);
				break;
			case 'B':
			case 'b':
				PrintBookList(mediaLib);
				break;
			case 'S':
			case 's':
				PrintSongList(mediaLib);
				break;
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
		choice = PrintMenu();
	}
}