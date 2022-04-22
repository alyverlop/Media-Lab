#include <iostream>
#include <string>
#include <vector>
#include "Media.h"

using namespace std;

Media::Media() {
	type = ' ';
	title = " ";
	rating = -1;
	yearReleased = -1;
	genre = " ";
}

Media::Media(char type, string t, int r, int y, string g) {
	this->type = type;
	title = t;
	rating = r;
	yearReleased = y;
	genre = g;
	cout << title << ":" << this->title << endl;
}
void Media::setType(char t) {
	this->type = t;
}
void Media:: setTitle(string t) {
	this->title = t;
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
void Media::setNum(int n) {
	num = n;
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
int Media::getNum() {
	return num;
}

void Media::print(ostream& o) {
	o << "Media: " << endl;
}

