#include <iostream>
#include <string>
#include <vector>
#include "Media.h"

using namespace std;

//Book::Book() {
//Book:: Book(string, string, string);

void Book::setAuthor(string a) {
	author = a;
}
void Book::setPages(int p) {
	pages = p;
}

string Book::getAuthor() {
	return author;
}
int Book::getPages() {
	return pages;
}





void Movie::setDirector(string d) {
	director = d;
}
void Movie::setDuration(int d) {
	duration = d;
}
void Movie::setStars(string s) {
	stars.push_back(s);
}
void Movie::getStars() {
	for (int i = 0; i < stars.size(); i++) {
		cout << stars.at(i);
	}
}

string Movie::getDirector() {
	return director;
}
int Movie::getDuration() {
	return duration;
}




void Song::setArtist(string a) {
	artist = a;
}
void Song::setDuration(int d) {
	duration = d;
}

string Song::getArtist() {
	return artist;
}
int Song::getDuration() {
	return duration;
}