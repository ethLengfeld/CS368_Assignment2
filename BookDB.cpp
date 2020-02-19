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

int addBook(int bookID, int year, double rating, vector<Book> &db) {

	for (auto &currBook : db) {
		if (currBook.ID == bookID) {
			return 1;
		}
	}

	Book addBook = {bookID,year,rating};
	db.push_back(addBook);

	return 0;
}

int updateBook(int bookID, int year, double rating, vector<Book> &db) {
	for (auto &currBook : db) {
		if (currBook.ID == bookID) {
			currBook.year = year;
			currBook.rating = rating;
			return 0;
		}
	}
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
	if(db.size() != 0) {

		for (auto &currBook : db) {
			cout << currBook.ID << ", " << currBook.year << ", " << currBook.rating << endl;
		}

	} else {
		cout << "No entries" << endl;
	}
}

// TODO
int sortDB(vector<Book> &db, int sortingMethod) {
	// TODO create sorting methods
	if(sortingMethod == 1) {
		//sort(,sortingMethod1);
		return 0;
	} else if (sortingMethod == 2) {
		//sort(,sortingMethod2);
		return 0;
	} else if (sortingMethod == 3) {
		//sort(,sortingMethod3);
		return 0;
	}
	// error
	return 1;
}

//int sortingMethod1() {
//	
//}

//int sortingMethod2() {
//
//}

//int sortingMethod3() {
//
//}

