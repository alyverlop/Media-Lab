#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "Header.h"
#include "Media.h"

using namespace std;


void PrintBookList(vector<Book> bookV) {
	cout << " " << setw(40) << right << "Your Book List" << " " << endl << endl;
	cout << setw(3) << right << "#";
	cout << setw(20) << right << "Title" << setw(20) << right << " ";
	cout << setw(10) << right << "Author" << setw(10) << right << " ";
	cout << setw(5) << right << "Year";
	cout << setw(10) << right << "Rating";
	cout << setw(20) << right << "Genre";
	cout << setw(5) << right << "Pages";

	for (int i = 0; i < bookV.size(); i++) {
		cout << bookV.at(i).getAuthor();
	}
}

void PrintMovieList(vector<Movie> movieV);

void PrintSongList(vector<Song> songV);

