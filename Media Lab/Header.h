#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <array>
#include "Media.h"

using namespace std;

void ReadFile(istream& inFile, ostream& outFile, vector<Media*>& mediaLib, int mediaCounts[]);

bool IsNumber(string input);

char PrintMenu();

void PrintBookList(vector<Media*>);

void PrintMovieList(vector<Media*>);

void PrintSongList(vector<Media*>);

void PrintList(vector<Media*>);

void PrintTotal(int mediaCounts[]);

void ListMovieStars(vector<Media*>, string);

void ListStarsMovies(vector <Media*> mediaLib, string input);