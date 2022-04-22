#include <iostream>
#include <string>
#include <vector>
#include "Media.h"

using namespace std;

Book::Book()
	:Media()
{
	author = " ";
	pages = 0;
}

Book::Book(char type, string t, string a, int r, string g, int p, int yr)
	: Media(type, t, r, yr, g)
{
	author = a;
	pages = p;
}

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

void Book::print(ostream& o) {
	o << "Book: " << title << " : " << author << endl;
}


Movie::Movie()
	:Media()
{
	director = " ";
	duration = 0;
	stars = {};
}

Movie::Movie(char type, string t, string a, int r, string g, int d, int yr, vector<string> s)
	: Media(type, t, r, yr, g)
{
	director = a;
	duration = d;
	stars = s;
}
void Movie::setDirector(string d) {
	director = d;
}
void Movie::setDuration(int d) {
	duration = d;
}
void Movie::setStars(vector<string> s) {
	stars = s;
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

void Movie::print(ostream& o) {
	o << "Movie: " << title << " : " << director << endl;
}



Song:: Song()
	:Media()
{
	artist = "";
	duration = 0;
}

Song::Song(char type, string t, string a, int r, string g, int p, int yr)
	:Media(type, t, r, yr, g)
{
	artist = a;
	duration = p;
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
void Song::print() {
	return; 
}
void Song::print(ostream& o) { 
	o << "Song: " << title << " : " << artist << endl;
}