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
	int mediaCounts[4] = { 0,0,0,0 };

	string input;

	char choice;


	ReadFile(inFile, outFile, mediaLib, mediaCounts);

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
				PrintList(mediaLib);
				break;
			case 'F':
			case 'f':
			case 'G':
			case 'g':
				cout << "Enter the movie name: ";
				cin >> input;
				ListMovieStars(mediaLib, input);
				break;
			case 'T':
			case 't':
				PrintTotal(mediaCounts);
				break;
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