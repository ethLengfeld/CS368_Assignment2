////////////////////////////////////////////////////////////////////////////////
// Main File: BookDB.cpp, demo.cpp
// This File: demo.cpp
// Other Files: 	 BookDB.h / BookDB.cpp / demo.cpp / Makefile / README.md
// Semester:         CS 368 Spring 2020
//
// Author:           Ethan Lengfeld
// Email:            elengfeld@wisc.edu
// CS Login:         lengfeld
//
//
// Online sources:   http://www.fredosaurus.com/notes-cpp/stl-containers/vector/vector-parameters.html
//					 https://www.geeksforgeeks.org/g-fact-30/
//
////////////////////////////////////////////////////////////////////////////////

/**
 * This class will demo the functions defined in the BookDB Library
*/
#include "BookDB.h"

int main() {

	char currCommand = '0';

	vector<Book> books;
	int bookID = 0;
	int year = 0;
	double rating = 0;

	double average = 0;
	vector<Book>* bookPtr;
	int sortingMethod = 0;

	int status = 0;

	while (currCommand != 'q') {

		cout << "> ";
		cin >> currCommand;

		switch (currCommand) {

			case 'p':
				if(books.size() != 0) {
					BOOKDB::print(books);
				} else {
					cout << "No entries" << endl;
				}
				break;


			case 'a':
				cin >> bookID;
				cin >> year;
				cin >> rating;
				status = BOOKDB::addBook(bookID, year, rating, books);
				if (!status) {
					cout << "Book " << bookID << " added" << endl;
				} else {
					cout << "Error processing command" << endl;
				}
				break;


			case 'd':
				cin >> bookID;
				status = BOOKDB::deleteBook(bookID, books);
				if (!status) {
					cout << "Book " << bookID << " removed" << endl;
				} else {
					cout << "Error processing command" << endl;
				}
				break;


			case 'u':
				cin >> bookID;
				cin >> year;
				cin >> rating;
				status = BOOKDB::updateBook(bookID, year, rating, books);
				if (!status) {
					cout << "Book " << bookID << " updated" << endl;
				} else {
					cout << "Error processing command" << endl;
				}
				break;


			case 'c':
				average = BOOKDB::calculateAverageRating(books);
				if(average != -1) {
					cout << "Average rating = " << average << endl;
				} else {
					cout << "Error processing command" << endl;
				}
				break;


			case 'f':
				cin >> year;
				bookPtr = BOOKDB::findBooks(year, books);
				if (bookPtr->size() != 0) {
					print(*bookPtr);
				} else {
					cout << "No entries" << endl;
				}
				// free heap memory
				delete bookPtr;
				break;


			case 's':
				cin >> sortingMethod;
				status = BOOKDB::sortDB(books, sortingMethod);
				if (status) {
					cout << "Error processing command" << endl;
				}
				break;


			case 'q':
				cout << "quit" << endl;
				break;
		}
	}

}
