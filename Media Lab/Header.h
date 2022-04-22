#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Media.h"

using namespace std;

void ReadFile(vector<Book>& bookV, vector <Movie>& movieV, vector <Song>& songV);

bool IsNumber(string input);

char PrintMenu();

void PrintBookList(vector<Book> bookV);

void PrintMovieList(vector<Movie> movieV);

void PrintSongList(vector<Song> songV);