#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Media {
private:
	char type;
	string title;
	int rating;
	string genre;
	int yearReleased;
public:
	void setType(char);
	void setTitle(string);
	void setRating(int);
	void setGenre(string);
	void setYear(int);

	char getType();
	string getTitle();
	int getRating();
	string getGenre();
	int getYear();
};

class Book : public Media {
private:
	string author;
	int pages;

public:
	//Book();
	//Book(, string, string);

	void setAuthor(string);
	void setPages(int);

	string getAuthor();
	int getPages();
};

class Movie : public Media {
private:
	string director;
	int duration;
	vector <string> stars;

public:

	void setDirector(string);
	void setDuration(int);
	void setStars(string);
	void getStars();

	string getDirector();
	int getDuration();
};

class Song : public Media {
private:
	string artist;
	int duration;

public:

	void setArtist(string);
	void setDuration(int);

	string getArtist();
	int getDuration();
};



