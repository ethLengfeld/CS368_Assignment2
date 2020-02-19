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
 * TODO
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

int addBook(int bookID, int year, double rating, vector<Book> &db);

int updateBook(int bookID, int year, double rating, vector<Book> &db);

int deleteBook(int bookID, vector<Book> &db);

vector<Book>* findBooks(int year, const vector<Book> &db);

double calculateAverageRating(const vector<Book> &db);

void print(const vector<Book> &db);

int sortDB(vector<Book> &db, int sortingMethod);

#endif
