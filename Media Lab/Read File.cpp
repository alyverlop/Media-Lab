#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "Header.h"
#include "Media.h"

using namespace std;


void ReadFile(istream& inFile, ostream& outFile, vector<Media*>& mediaLib) {
	cout << "\n\n\nLoading Data File\n\n\n";

	string inLine, title, director, genre, tempStr, testChar, name, author, artist;
	int rating, duration, year, pages;
	int num = 0;
	vector<string> stars;
	vector<string> row;
	char choice = ' ';

	while (inFile.good()) {
		getline(inFile, inLine);
		testChar = inLine.substr(0, 1);
		if (testChar == "Q")
			break;

		//read data in string vector
		row.clear();
		stars.clear();
		stringstream inSS(inLine);
		while (getline(inSS, tempStr, ',')) {
			row.push_back(tempStr);
		}
		if (testChar == "B") { //checks type
			title = row[1]; //sets correct inputs
			author = row[2];
			genre = row[4];
			try { //catches errors if these rows are not integers
				rating = stoi(row[3]);
				pages = stoi(row[5]);
				year = stoi(row[6]);
			}
			catch (invalid_argument& e) {
				string msg = "\nERROR: " + inLine.substr(0, inLine.length() - 2);
				outFile << msg << "\nPrevious record has an " << e.what() << " error\n\n";
				continue;
			}
			catch (string a) {
				cout << a << endl;
				exit(1);
			}
			char type = 'B'; //sets book into media vector
			num++;
			Book* tempBook = new Book(type, title, author, rating, genre, pages, year, num);

			mediaLib.push_back(tempBook);
			//mediaCounts[1] ++;
		}
		

		if (testChar == "M") {
			title = row[1];
			director = row[2];
			genre = row[4];
			for (int i = 7; i < row.size(); i++) {
				stars.push_back(row[i]);
			}
			try {
				rating = stoi(row[3]);
				duration = stoi(row[5]);
				year = stoi(row[6]);
			}
			catch (invalid_argument& e) {
				string msg = "\nERROR: " + inLine.substr(0, inLine.length() - 2);
				outFile << msg << "\nPrevious record has an " << e.what() << " error\n\n";
				continue;
			}
			catch (string a) {
				cout << a << endl;
				exit(1);
			}

			char type = 'M';
			num++;
			Movie* tempMovie = new Movie (type, title, director, rating, genre, duration, year, stars, num);

			mediaLib.push_back(tempMovie);
			//mediaCounts[1] ++;
		}
		if (testChar == "S") {
			title = row[1];
			artist = row[2];
			genre = row[4];
			try {
				rating = stoi(row[3]);
				duration = stoi(row[5]);
				year = stoi(row[6]);
			}
			catch (invalid_argument& e) {
				string msg = "\nERROR: " + inLine.substr(0, inLine.length() - 2);
				outFile << msg << "\nPrevious record has an " << e.what() << " error\n\n";
				continue;
			}
			catch (string a) {
				cout << a << endl;
				exit(1);
			}
			char type = 'S';
			num++;
			Song* tempSong = new Song(type, title, artist, rating, genre, duration, year, num);

			mediaLib.push_back(tempSong);
			//mediaCounts[1] ++;
		}


	}
}
/*
void ReadFile(istream& inFile, ostream& outFile, vector<Media*> mediaLib) {

	string inLine, title, director, genre, tempStr, testChar, name, author;
	int rating, duration, year, pages;
	int i, j;
	int num = 0; 
	Book* tempBook;
	Movie* tempMovie;
	Song* tempSong;
	vector<string> row;
	vector<string> errorV;
	string tempInput; // Input string
	string input; // keeps whole stream
	stringstream inSS(tempInput);

	ifstream fin;
	ofstream fout ("output.txt");

	fin.open("mediaList.txt"); //opens file

	if (!fin.is_open()) { // returns error if file cant open
		cout << "Could not open input.txt." << endl;
	}

	while (fin.good() || !fin.eof()) { // goes through loop until error or end of file
		fin >> type; // inputs type to go through switch 
		num++;

		switch (type) {
		case 'B':
			title = row[1];
			author = row[2];
			genre = row[4];
			try {
				rating = stoi(row[3]);
				pages = stoi(row[5]);
				year = stoi(row[6]);
			}
			catch (invalid_argument& e) {
				string msg = "\nERROR: " + inLine.substr(0, inLine.length() - 2);
				outFile << msg << "\nPrevious record has an " << e.what() << " error\n\n";
				continue;
			}
			catch (string a) {
				cout << a << endl;
				exit(1);
			}
			char type = 'B';
			Book* tempBook = new Book(type, title, author, rating, genre, pages, year);

			mediaLib.push_back(tempBook);
			mediaCounts[1] ++;
			break;
		case 'M':
			getline(fin, tempInput); // pulls in full csv line

			inSS.clear(); // clears previous stream
			inSS.str(tempInput); // enters new stream

			input = tempInput; // keeps whole string stream for error report

			while (getline(inSS, tempInput, ',')) { // breaks stream up into each section
				row.push_back(tempInput); // assigns everything into row vectore

			}

			if (!IsNumber(row[3]) || !IsNumber(row[5])) { // checks if there is an error by checking if the third input is a number
				errorV.push_back(input); //pushes into error vector
			}
			else { // if no errors
				tempMovie.setNum(num);
				tempMovie.setType(type);
				tempMovie.setTitle(row[1]); // assigns each section into the approriate area
				tempMovie.setDirector(row[2]);
				tempMovie.setRating(stoi(row[3]));
				tempMovie.setGenre(row[4]);
				tempMovie.setDuration(stoi(row[5]));
				tempMovie.setYear(stoi(row[6]));
				for (i = 7; i< row.size(); i++) {
					tempMovie.setStars(row[i]);
				}
				mediaLib.push_back(tempMovie); // pushes temp into the vector
			}
			while (row.size() > 0) {
				row.pop_back();// pop backs to clear vector loop
			}
			break;
		case 'S':
			getline(fin, tempInput); // pulls in full csv line

			inSS.clear(); // clears previous stream
			inSS.str(tempInput); // enters new stream

			input = tempInput; // keeps whole string stream for error report

			while (getline(inSS, tempInput, ',')) { // breaks stream up into each section
				row.push_back(tempInput); // assigns everything into row vector
			}

			if (!IsNumber(row[3]) || !IsNumber(row[5])) { // checks if there is an error by checking if the third input is a number
				errorV.push_back(input); //pushes into error vector
			}
			else { // if no errors
				tempSong.setNum(num);
				tempSong.setType(type);
				tempSong.setTitle(row[1]); // assigns each section into the approriate area
				tempSong.setArtist(row[2]);
				tempSong.setRating(stoi(row[3]));
				tempSong.setGenre(row[4]);
				tempSong.setDuration(stoi(row[5]));
				tempSong.setYear(stoi(row[6]));
				songV.push_back(tempSong); // pushes temp into the vector
			}
			while (row.size() > 0) {
				row.pop_back();// pop backs to clear vector loop
			}
			break;
		default:
			break;
		}
		type = 'd'; // resets type each time so it doesnt create an endless loop 
	}

	fin.close(); // closes file

	for (j = 0; j < errorV.size(); j++) { // goes through error vector
		fout << "Error: " << errorV.at(j) << endl;
		fout << "Previous record has an stoi error." << endl << endl;
	}*/

