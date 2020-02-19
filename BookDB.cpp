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
			// error
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
	// error
	return 1;
}

int deleteBook(int bookID, vector<Book> &db) {
	for (auto currBookItr = db.begin(); currBookItr != db.end(); ++currBookItr) {
		if (currBookItr->ID == bookID) {
			db.erase(currBookItr);
			return 0;
		}
	}
	// error
	return 1;
}

vector<Book>* findBooks(int year, const vector<Book> &db) {

	vector<Book>* bookPtr = new vector<Book>;

	for (auto &currBook : db) {
		if (currBook.year == year) {
			bookPtr->push_back(currBook);
		}
	}	

	return bookPtr;
}

double calculateAverageRating(const vector<Book> &db) {
	double sum = 0;

	for (auto &currBook : db) {
		sum += currBook.rating;
	}

	if (sum != 0) {
		return sum / db.size();
	}
	// error
	return -1;
}

void print(const vector<Book> &db) {
	if(db.size() != 0) {

		for (auto &currBook : db) {
			cout << currBook.ID << ", " << currBook.year << ", " << currBook.rating << endl;
		}

	} else {
		cout << "No entries" << endl;
	}
}

bool sortingMethod1(const Book &a, const Book &b) {
	if(a.ID < b.ID) {
		return true;
	} else {
		return false;
	}
}

bool sortingMethod2(const Book &a, const Book &b) {
	if(a.year < b.year) {
		return true;
	}
	if (a.year > b.year) {
		return false;
	}
	return a.ID < b.ID;
}

bool sortingMethod3(const Book &a, const Book &b) {
	if(a.rating < b.rating) {
		return true;
	}
	if (a.rating > b.rating) {
		return false;
	}
	return a.ID < b.ID;
}

int sortDB(vector<Book> &db, int sortingMethod) {
	if(sortingMethod == 1) {
		sort(db.begin(),db.end(),sortingMethod1);
		return 0;
	} else if (sortingMethod == 2) {
		sort(db.begin(),db.end(),sortingMethod2);
		return 0;
	} else if (sortingMethod == 3) {
		sort(db.begin(),db.end(),sortingMethod3);
		return 0;
	}
	// error
	return 1;
}


