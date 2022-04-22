#include <iostream>
#include <string>
#include <vector>
#include "Media.h"

using namespace std;

void Media::setType(char t) {
	type = t;
}
void Media:: setTitle(string t) {
	title = t;
}
void Media:: setRating(int r) {
	rating = r;
}
void Media::setGenre(string g) {
	genre = g;
}
void Media::setYear(int y) {
	yearReleased = y;
}

char Media::getType() {
	return type;
}
string Media::getTitle() {
	return title;
}
int Media::getRating() {
	return rating;
}
string Media::getGenre() {
	return genre;
}
int Media::getYear() {
	return yearReleased;
}

