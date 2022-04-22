#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Media {
protected:
	char type;
	string title;
	int rating;
	string genre;
	int yearReleased;
	int num;
public:
	Media();
	Media(char, string, int, int, string);
	void setType(char);
	void setTitle(string);
	void setRating(int);
	void setGenre(string);
	void setYear(int);
	void setNum(int);

	char getType();
	string getTitle();
	int getRating();
	string getGenre();
	int getYear();
	int getNum();

	virtual void print(ostream& o);
};

class Book : public Media {
private:
	string author;
	int pages;

public:
	Book();
	Book(char type, string t, string a, int r, string g, int p, int yr);

	void setAuthor(string);
	void setPages(int);

	string getAuthor();
	int getPages();
	void print(ostream& o);
};

class Movie : public Media {
private:
	string director;
	int duration;
	vector <string> stars;

public:
	Movie();
	Movie(char, string, string, int, string, int, int, vector<string>);
	void setDirector(string);
	void setDuration(int);
	void setStars(vector<string>);
	void getStars();

	string getDirector();
	int getDuration();
	
	void print(ostream& o);

};

class Song : public Media {
private:
	string artist;
	int duration;

public:
	Song();
	Song(char type, string t, string a, int r, string g, int p, int yr);
	void setArtist(string);
	void setDuration(int);

	string getArtist();
	int getDuration();
	void print();
	void print(ostream& o);
};



