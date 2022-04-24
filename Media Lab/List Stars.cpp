#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include "Header.h"
#include "Media.h"

using namespace std;

void ListMovieStars(vector<Media*> mediaLib, string input) {
	for (int i = 0; i < mediaLib.size(); i++) {
		if (input == mediaLib.at(i)->getTitle()) {
			mediaLib.at(i)->printStar(cout);
			break; // leaves loop so it doesnt go through last test
		}
		if (i == mediaLib.size() - 1 && input != mediaLib.at(i)->getTitle()) { // if end of list and no result
			cout << "Sorry, the movie \"" << input << "\" could not be found in you library." << endl;
		}
	}
}



void ListStarsMovies(vector <Media*> mediaLib, string input) {
	vector<string> movies;
	vector<string> stars;

	for (int i = 0; i < mediaLib.size(); i++) {
		stars = mediaLib.at(i)->getStars();
		for (int j = 0; j < stars.size(); j++) {
			if (input == stars.at(j)) {
				movies.push_back(mediaLib.at(i)->getTitle());
			}
		}
		stars.clear(); // clears vector for new movie
	}

	if (movies.size() == 0) {
		cout << "Sorry, but the star: " << input << " is not in any movies in your libarary." << endl;
	}
	else {
		cout << input << " stars in the following movies in your libarary: " << endl;
		for (int i = 0; i < movies.size(); i++) {
			cout << movies.at(i) << endl;
		}
	}
}