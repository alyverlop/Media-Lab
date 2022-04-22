#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "Header.h"
#include "Media.h"

using namespace std;


void ReadFile(vector<Book>& bookV, vector <Movie>& movieV, vector <Song>& songV) {

	char type;
	int i, j;
	Book tempBook;
	Movie tempMovie;
	Song tempSong;
	vector<string> row;
	vector<string> errorV;
	string  tempInput; // Input string
	stringstream inSS(tempInput);

	ifstream fin;
	ofstream fout ("output.txt");

	fin.open("movieList2.csv"); //opens file

	if (!fin.is_open()) { // returns error if file cant open
		cout << "Could not open input.txt." << endl;
	}

	while (fin.good() || !fin.eof()) { // goes through loop until error or end of file
		fin >> type; // inputs type to go through switch 
		switch (type) {
		case 'B':
			getline(fin, tempInput); // pulls in full csv line

			inSS.clear(); // clears previous stream
			inSS.str(tempInput); // enters new stream

			i = 0;

			while (getline(inSS, tempInput, ',')) { // breaks stream up into each section
				row.push_back(tempInput); // assigns everything into row vector
			}

			if (!IsNumber(row[3])) { // checks if there is an error by checking if the third input is a number
				errorV.push_back(tempInput); //pushes into error vector
			}
			else { // if no errors
				tempBook.setType(type);
				tempBook.setTitle(row[1]); // assigns each section into the approriate area
				tempBook.setAuthor(row[2]);
				tempBook.setRating(stoi(row[3]));
				tempBook.setGenre(row[4]);
				tempBook.setPages(stoi(row[5]));
				tempBook.setYear(stoi(row[6]));

				bookV.push_back(tempBook); // pushes temp into the vector
			}
			row.pop_back();// pop backs to clear vector
			row.pop_back();
			row.pop_back();
			row.pop_back();
			row.pop_back();
			row.pop_back();
			row.pop_back();
			break;
		case 'M':
			getline(fin, tempInput); // pulls in full csv line

			inSS.clear(); // clears previous stream
			inSS.str(tempInput); // enters new stream

			while (getline(inSS, tempInput, ',')) { // breaks stream up into each section
				row.push_back(tempInput); // assigns everything into row vectore

			}

			if (!IsNumber(row[3])) { // checks if there is an error by checking if the third input is a number
				
				errorV.push_back(tempInput); //pushes into error vector
			}
			else { // if no errors
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
				movieV.push_back(tempMovie); // pushes temp into the vector
			}
			while (row.size() > 0) {
				row.pop_back();// pop backs to clear vector loop
			}
			break;
		case 'S':
			getline(fin, tempInput); // pulls in full csv line

			inSS.clear(); // clears previous stream
			inSS.str(tempInput); // enters new stream

			while (getline(inSS, tempInput, ',')) { // breaks stream up into each section
				row.push_back(tempInput); // assigns everything into row vector
			}

			if (!IsNumber(row[3])) { // checks if there is an error by checking if the third input is a number
				errorV.push_back(tempInput); //pushes into error vector
			}
			else { // if no errors
				tempSong.setType(type);
				tempSong.setTitle(row[1]); // assigns each section into the approriate area
				tempSong.setArtist(row[2]);
				tempSong.setRating(stoi(row[3]));
				tempSong.setGenre(row[4]);
				tempSong.setDuration(stoi(row[5]));
				tempSong.setYear(stoi(row[6]));
				songV.push_back(tempSong); // pushes temp into the vector
			}
			row.pop_back();// pop backs to clear vector
			row.pop_back();
			row.pop_back();
			row.pop_back();
			row.pop_back();
			row.pop_back();
			row.pop_back();
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
	}

}