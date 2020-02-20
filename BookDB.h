////////////////////////////////////////////////////////////////////////////////
// Main File: BookDB.cpp, demo.cpp
// This File: BookDB.h
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

#ifndef BOOKDB
#define BOOKDB

/**
 * This library will hold methods that can be
 * used to build and manipulate a database of books.
 * Library will allow for traversal, modification,
 * sorting, and deleting of books in the database.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct Book {
    int ID;
    int year;
    double rating;
} Book;


/**
 * Add a book with a unique Id (not already in book db) to 
 * the referenced vector with Books.
 * 
 * @param int bookID - id of book to add
 * @param int year - year of book to add
 * @param double rating - rating of book to add
 * @param vector<Book> &db - referenced database of books
 * @return int - return 0 for success, 1 for an error
*/
int addBook(int bookID, int year, double rating, vector<Book> &db);

/**
 * Find book in book database based off bookId and update
 * the book with year and rating
 * 
 * @param int bookID - id of book to find
 * @param int year - year of book to update
 * @param double rating - rating of book to update
 * @param vector<Book> &db - referenced database of books
 * @return int - return 0 for success, 1 for an error
*/
int updateBook(int bookID, int year, double rating, vector<Book> &db);

/**
 * Find book with bookID and delete from the book database
 * 
 * @param int bookID - id of book to add
 * @param vector<Book> &db - referenced database of books
 * @return int - return 0 for success, 1 for an error
*/
int deleteBook(int bookID, vector<Book> &db);

/**
 * Find all books in the book database with the same year.
 * 
 * @param int year - year of books to find.
 * @param vector<Book> &db - referenced database of books.
 * @return vector<Book>* - pointer to books with same year.
*/
vector<Book>* findBooks(int year, const vector<Book> &db);

/**
 * Calculate the average rating from all books in the
 * book database.
 * 
 * @param vector<Book> &db - referenced database of books.
 * @return double - average rating from all books in database.
*/
double calculateAverageRating(const vector<Book> &db);

/**
 * Print all books in the book database.
 * For every book the book id, the book's
 * year, and the book's rating will be printed.
 * 
 * @param vector<Book> &db - referenced database of books
*/
void print(const vector<Book> &db);

/**
 * Sort the database of books based on selected
 * sorting method either 1, 2, or 3.
 * 1 - Books sorted in order of increasing ID number.
 * 2 - Books sorted in order of increasing year. 
 *     Ties broken by putting smaller book IDs before larger ones.
 * 3 - Books sorted in order of increasing rating. 
 *     Ties broken by putting smaller book IDs before larger ones.
 * 
 * @param vector<Book> &db - referenced database of books
 * @param int sortingMethod - determine sorting method (1, 2, or 3)
 * @return int - return 0 for success, 1 for an error 
*/
int sortDB(vector<Book> &db, int sortingMethod);

#endif