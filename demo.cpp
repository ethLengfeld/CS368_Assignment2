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
	//vector<Book>* bookPtr;
	int sortingMethod = 0;

	int status = 0;

	while (currCommand != 'q') {

		cout << ">";
		cin >> currCommand;

		switch (currCommand) {

			case 'p':
				BOOKDB::print(books);
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
				//cout << "consider that book cancelled" << endl;
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
				//cout << "calculate average" << endl;
				average = BOOKDB::calculateAverageRating(books);
				if(average != -1) {
					cout << "Average rating = " << average << endl;
				} else {
					cout << "Error processing command" << endl;
				}
				break;


			case 'f':
				//cout << "print all books from my brithday year" << endl;
				cin >> year;
				//bookPtr = BOOKDB::findBooks(year, books);
				if (!status) {
					
				} else {
					cout << "No entries found" << endl;
				}
				break;


			case 's':
				//cout << "book sort" << endl;
				cin >> sortingMethod;
				cout << "Sorting Method " << sortingMethod << " was chosen" << endl;
				status = BOOKDB::sortDB(books, sortingMethod);
				if (!status) {
					BOOKDB::print(books);
				} else {
					cout << "Error processing command" << endl;
				}
				break;


			case 'q':
				cout << "quit" << endl;
				break;
		}
	}





}
