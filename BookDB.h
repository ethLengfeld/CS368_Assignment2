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

/**
 * 
 * 
 * @param int bookID - 
 * @param int year -
 * @param double rating -
 * @param vector<Book> &db -
 * @return int - 
*/
int addBook(int bookID, int year, double rating, vector<Book> &db);

/**
 * 
 * 
 * @param int bookID - 
 * @param int year -
 * @param double rating -
 * @param vector<Book> &db -
 * @return int - 
*/
int updateBook(int bookID, int year, double rating, vector<Book> &db);

/**
 * 
 * 
 * @param int bookID - 
 * @param vector<Book> &db -
 * @return int - 
*/
int deleteBook(int bookID, vector<Book> &db);

/**
 * 
 * 
 * @param int year -
 * @param vector<Book> &db -
 * @return vector<Book>* - 
*/
vector<Book>* findBooks(int year, const vector<Book> &db);

/**
 * 
 * 
 * @param vector<Book> &db -
 * @return double - 
*/
double calculateAverageRating(const vector<Book> &db);

/**
 * 
 * 
 * @param vector<Book> &db -
*/
void print(const vector<Book> &db);

/**
 * 
 * 
 * @param vector<Book> &db -
 * @param int sortingMethod - 
 * @return int - 
*/
int sortDB(vector<Book> &db, int sortingMethod);

#endif
