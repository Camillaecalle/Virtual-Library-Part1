//Camilla Calle
//Feburary 6, 2023
//Book.hpp is the interface. Here I created the class Book with the assigned public, private member variables, and public 
//member functions. 

#ifndef BOOK_HPP
#define BOOK_HPP

#include <iostream>
#include <string>
//using namespace std;


class Book {
private: 
std::string title_;
std::string author_; 
int pageCount_;
bool digital_;  

public: 
Book(); //Default Constructor

//Parameterized Constructor
Book(std::string title, std::string author, int pageCount, bool digital = false);


const std::string getTitle(); //getter


const void setTitle(std::string title);//setter


const std::string getAuthor(); //getter
const void setAuthor(std::string author); //setter
const void setPageCount(int pageCount); //setter
const int getPageCount(); //getter
const void setDigital(); //setter
bool isDigital() const;

};
#endif