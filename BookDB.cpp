////////////////////////////////////////////////////////////////////////////////
// Main File: BookDB.cpp, demo.cpp
// This File: BookDB.cpp
// Other Files: 	 BookDB.h / BookDB.cpp / demo.cpp / Makefile / README.md
// Semester:         CS 368 Spring 2020
//
// Author:           Ethan Lengfeld
// Email:            elengfeld@wisc.edu
// CS Login:         lengfeld
//
//
// Online sources:   
//
////////////////////////////////////////////////////////////////////////////////

/**
 * TODO
*/
#include "BookDB.h"

// TODO
int addBook(int bookID, int year, double rating, vector<Book> &db) {
	if(bookID > 2) {
		cout << "found the book!" << endl;
		return 0;
	}
	// error
	return 1;
}

// TODO
int updateBook(int bookID, int year, double rating, vector<Book> &db) {
	// error
	return 1;
}

// TODO
int deleteBook(int bookID, vector<Book> &db) {
	// error
	return 1;
}

// TODO
vector<Book>* findBooks(int year, const vector<Book> &db) {
	// error
	// vector<Book> bookPtr;

	// return &bookPtr;
	return 0;
}

// TODO
double calculateAverageRating(const vector<Book> &db) {
	double average = -1;

	return average;
}

// TODO
void print(const vector<Book> &db) {
	cout << "vector here" << endl;
}

// TODO
int sortDB(vector<Book> &db, int sortingMethod) {
	// TODO create sorting methods
	// error
	return 1;
}

