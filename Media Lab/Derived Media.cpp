#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "Media.h"

using namespace std;

Book::Book()
	:Media()
{
	author = " ";
	pages = 0;
}

Book::Book(char type, string t, string a, int r, string g, int p, int y, int n)
	: Media(type, t, r, y, g, n)
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
	o << setw(3) << right << num;
	o << "  " << setw(42) << left << title;
	o << setw(20) << right << author;
	o << setw(7) << right << yearReleased;
	o << setw(10) << right << rating;
	o << setw(19) << right << genre;
	o << setw(10) << right << pages << endl;
}

void Book::printList (ostream& o) {
	o << "Book: " << title << " : " << author << endl;
}


Movie::Movie()
	:Media()
{
	director = " ";
	duration = 0;
	stars = {};
}

Movie::Movie(char type, string t, string a, int r, string g, int d, int y, vector<string> s, int n)
	: Media(type, t, r, y, g, n)
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
	o << setw(3) << right << num;
	o << "  " << setw(42) << left << title;
	o << setw(20) << right << director;
	o << setw(7) << right << yearReleased;
	o << setw(10) << right << rating;
	o << setw(19) << right << genre;
	o << setw(10) << right << duration << endl;
}

void Movie::printList (ostream& o) {
	o << "Movie: " << title << " : " << director << endl;
}






Song:: Song()
	:Media()
{
	artist = "";
	duration = 0;
}

Song::Song(char type, string t, string a, int r, string g, int p, int y, int n)
	:Media(type, t, r, y, g, n)
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
	o << setw(3) << right << num;
	o << "  " << setw(28) << left << title;
	o << setw(35) << right << artist;
	o << setw(7) << right << yearReleased;
	o << setw(10) << right << rating;
	o << setw(19) << right << genre;
	o << setw(10) << right << duration << endl;
}
void Song::printList (ostream& o) {
	o << "Song: " << title << " : " << artist << endl;
}