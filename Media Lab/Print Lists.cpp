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
		if (mediaLib.at(i).getType() == 'B') {
			cout << setw(3) << right << mediaLib.at(i).getNum();
			cout << "  " << setw(42) << left << mediaLib.at(i).getTitle();
			cout << setw(20) << right << mediaLib.at(i).getAuthor();
			cout << setw(7) << right << mediaLib.at(i).getYear();
			cout << setw(10) << right << mediaLib.at(i).getRating();
			cout << setw(19) << right << mediaLib.at(i).getGenre();
			cout << setw(10) << right << mediaLib.at(i).getPages() << endl;
		}
	}
}

void PrintMovieList(vector<Movie> movieV) {
	cout << " " << setw(40) << right << "Your Movie List" << " " << endl << endl;
	cout << setw(3) << right << "#";
	cout << setw(22) << right << "Title" << setw(22) << right << " ";
	cout << setw(20) << right << "Director";
	cout << setw(7) << right << "Year";
	cout << setw(10) << right << "Rating";
	cout << setw(7) << right << " " << "Genre " << setw(7) << right << " ";
	cout << setw(10) << right << "Duration" << endl;

	for (int i = 0; i < movieV.size(); i++) {
		cout << setw(3) << right << movieV.at(i).getNum();
		cout << "  " << setw(42)<< left << movieV.at(i).getTitle();
		cout << setw(20) << right << movieV.at(i).getDirector();
		cout << setw(7) << right << movieV.at(i).getYear();
		cout << setw(10) << right << movieV.at(i).getRating();
		cout << setw(20) << right << movieV.at(i).getGenre();
		cout << setw(10) << right << movieV.at(i).getDuration() << endl;
	}
}

void PrintSongList(vector<Song> songV) {
	cout << " " << setw(40) << right << "Your Song List" << " " << endl << endl;
	cout << setw(3) << right << "#";
	cout << setw(22) << right << "Title" << setw(22) << right << " ";
	cout << setw(40) << right << "Artist";
	cout << setw(7) << right << "Year";
	cout << setw(10) << right << "Rating";
	cout << setw(7) << right << " " << "Genre " << setw(7) << right << " ";
	cout << setw(10) << right << "Duration" << endl;

	for (int i = 0; i < songV.size(); i++) {
		cout << setw(3) << right << songV.at(i).getNum();
		cout << "  " << setw(42) << left << songV.at(i).getTitle();
		cout << setw(40) << right << songV.at(i).getArtist();
		cout << setw(7) << right << songV.at(i).getYear();
		cout << setw(10) << right << songV.at(i).getRating();
		cout << setw(20) << right << songV.at(i).getGenre();
		cout << setw(10) << right << songV.at(i).getDuration() << endl;
	}
}

