#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Artist
{
private:
	string name;
	int numberOfAlbums;
	int numberOfSongs;
	vector<string> songs;
public:
	Artist(string name, int numberOfAlbums, int numberOfSongs, vector<string> songs) : name(name), numberOfAlbums(numberOfAlbums), numberOfSongs(numberOfSongs), songs(songs) {}
	string getName();
	int getNumberOfAlbums();
	int getNumberOfSongs();	
	vector<string> getSongs();
	void setName(string name);
	void setNumberOfAlbums(int numberOfAlbums);
	void setNumberOfSongs(int numberOfSongs);
	void setSongs(const vector<string>& songs);
	void printInfo();
};

