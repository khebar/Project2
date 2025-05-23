#pragma once
#include <iostream>
#include <string>
using namespace std;
class Song
{
private:
	string title;
	string artist;
	int releaseYear;
	string genre;
public:
	Song(string title, string artist, int releaseYear, string genre) : title(title), artist(artist), releaseYear(releaseYear), genre(genre) {}
	string getTitle();
	string getArtist();
	int getReleaseYear();
	string getGenre();
	void setTitle(string title);
	void setArtist(string artist);
	void setReleaseYear(int releaseYear);
	void setGenre(string genre);
	void displayInfo();
};


