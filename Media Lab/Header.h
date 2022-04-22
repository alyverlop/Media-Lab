#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Media.h"

using namespace std;

void ReadFile(istream& inFile, ostream& outFile, vector<Media*>& mediaLib);

bool IsNumber(string input);

char PrintMenu();

void PrintBookList(vector<Media*>);

void PrintMovieList(vector<Media*>);

void PrintSongList(vector<Media*>);