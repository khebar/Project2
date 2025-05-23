#include "Song.h"
#include <iostream>
#include <string>
using namespace std;


string Song::getTitle() {
	return title;
}
string Song::getArtist() {
	return artist;
}
int Song::getReleaseYear() {
	return releaseYear;
}
string Song::getGenre() {
	return genre;
}
void Song::displayInfo() {
	cout << "Title: " << title << endl;
	cout << "Artist: " << artist << endl;
	cout << "Release Year: " << releaseYear << endl;
	cout << "Genre: " << genre << endl;
}
void Song::setTitle(string t) {
	title = t;
}
void Song::setArtist(string a) {
	artist = a;
}
void Song::setReleaseYear(int r) {
	releaseYear = r;
}
void Song::setGenre(string g) {
	genre = g;
}