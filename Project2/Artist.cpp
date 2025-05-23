#include "Artist.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void Artist::printInfo() {
	cout << "Artist Name: " << name << endl;
	cout << "Number of Albums: " << numberOfAlbums << endl;
	cout << "Number of Songs: " << numberOfSongs << endl;
	cout << "Songs: ";
	for (string song : songs) {
		cout << song << ", ";
	}
	cout << endl;
}
void Artist::setSongs(const vector<string>& songs) {
	this->songs = songs;
}
string Artist::getName() { return name; }
int Artist::getNumberOfAlbums() { return numberOfAlbums; }
int Artist::getNumberOfSongs() { return numberOfSongs; }
vector<string> Artist::getSongs() { return songs; }
void Artist::setName(string name) { this->name = name; }
void Artist::setNumberOfAlbums(int numberOfAlbums) { this->numberOfAlbums = numberOfAlbums; }
void Artist::setNumberOfSongs(int numberOfSongs) { this->numberOfSongs = numberOfSongs; }