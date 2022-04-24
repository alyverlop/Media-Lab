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
		}
	}
}