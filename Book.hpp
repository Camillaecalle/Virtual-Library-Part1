//Camilla Calle
//CSCI 235


#ifndef BOOK_HPP
#define BOOK_HPP

#include <iostream>
#include <string>
using namespace std;


class Book {
private: 
std::string title_;
std::string author_; 
int pageCount_;
bool digital_;  

public: 
Book(); //Default Constructor
// std::string Book(std::string name, std::string author, int pageCount, bool digital);
std::string getTitle() const; //getter
void setTitle(std::string nameTitle);//setter
std::string getAuthor() const;
void setAuthor(std::string nameAuthor);
void setPageCount(int pageCount);
int getPageCount() const;
void setDigital(bool digitalFlag);
bool isDigital() const;


};



#endif