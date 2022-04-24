#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "Header.h"
#include "Media.h"

using namespace std;


void PrintBookList(vector<Media*> mediaLib) {
	cout << " " << setw(40) << right << "Your Book List" << " " << endl << endl;
	cout << setw(3) << right << "#";
	cout << setw(22) << right << "Title" << setw(22) << right << " ";
	cout << setw(20) << right << "Author";
	cout << setw(7) << right << "Year";
	cout << setw(10) << right << "Rating";
	cout << setw(7) << right <<" " << "Genre" << setw(7) << right << " ";
	cout << setw(10) << right << "Pages" << endl;

	for (int i = 0; i < mediaLib.size(); i++) {
		if (mediaLib.at(i)->getType() == 'B') {
			mediaLib.at(i)->print(cout);
		}
	}
}

void PrintMovieList(vector<Media*> mediaLib) {
	cout << " " << setw(40) << right << "Your Movie List" << " " << endl << endl;
	cout << setw(3) << right << "#";
	cout << setw(22) << right << "Title" << setw(22) << right << " ";
	cout << setw(20) << right << "Director";
	cout << setw(7) << right << "Year";
	cout << setw(10) << right << "Rating";
	cout << setw(7) << right << " " << "Genre " << setw(7) << right << " ";
	cout << setw(10) << right << "Duration" << endl;

	for (int i = 0; i < mediaLib.size(); i++) {
		if (mediaLib.at(i)->getType() == 'M') {
			mediaLib.at(i)->print(cout);
		}
	}
}

void PrintSongList(vector<Media*> mediaLib) {
	cout << " " << setw(40) << right << "Your Song List" << " " << endl << endl;
	cout << setw(3) << right << "#";
	cout << setw(15) << right << "Title" << setw(16) << right << " ";
	cout << setw(35) << right << "Artist";
	cout << setw(7) << right << "Year";
	cout << setw(10) << right << "Rating";
	cout << setw(8) << right << " " << "Genre " << setw(8) << right << " ";
	cout << setw(10) << right << "Duration" << endl;

	for (int i = 0; i < mediaLib.size(); i++) {
		if (mediaLib.at(i)->getType() == 'S') {
			mediaLib.at(i)->print(cout);
		}
	}
}

void PrintList(vector<Media*> mediaLib) {
	cout << " " << setw(40) << right << "Your Media List" << " " << endl << endl;
	cout << setw(5) << "Type";
	cout << setw(3) << right << "#";
	cout << setw(20) << right << "Title" << setw(20) << right << " ";
	cout << setw(7) << right << "Year";
	cout << setw(10) << right << "Rating" << endl;


	for (int i = 0; i < mediaLib.size(); i++) {
			mediaLib.at(i)->printList(cout);
	}
}

void PrintTotal(int mediaCounts[]) {
	cout << " " << setw(40) << right << "Your Media List" << " " << endl << endl;
	cout << setw(7) << "Type";
	cout << setw(3) << right << "#" << endl;

	cout << setw(7) << "Books";
	cout << setw(3) << right << mediaCounts[1] << endl;

	cout << setw(7) << "Movies";
	cout << setw(3) << right << mediaCounts[2] << endl;

	cout << setw(7) << "Songs";
	cout << setw(3) << right << mediaCounts[3] << endl;

	cout << setw(7) << "Media";
	cout << setw(3) << right << mediaCounts[0] << endl;
}

