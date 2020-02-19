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

/**
 * TODO
*/
// TODO define BookDB functions and Book struct
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct Book {
    // TODO check what it wants write up says named ID
    int named_ID;
    int year;
    double rating;
} Book;

vector<Book> books;

void printBook();

void addBook(int named_ID);

void deleteBook(int named_ID);

void findAndUpdateBook(int named_ID, int year, double rating);

void calculateAvgBookRating();

void printAllBooksOfYear(int year);

void sortBooks(int sortOrder);