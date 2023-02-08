//Camilla Calle
//Febuary 6, 2023
//Book.cpp is the implementation. Here I gave the functions (that I have in my interface file) 
//functionality. 

#include "Book.hpp"
#include <iostream>
#include <string> 

//Default Constructor
Book::Book() {   
}
//Parameterized constructor
Book::Book(std::string title, std::string author, int pageCount, bool digital) {
    title_= title;
    author_= author;
    pageCount_= pageCount;
    digital_= digital;
}

const std::string Book::getTitle(){ //getting so no parameter
    return title_; 
}

const void Book::setTitle(std::string title)  {
    title_ = title;
}

const std::string Book::getAuthor(){
    return author_;
}

const void Book::setAuthor(std::string author) {
     author_ = author;
}

//setter for page count. (Mutator)
//page count > 0
//set page count to the value of the parameter. 
const void Book::setPageCount(int pageCount) { 
    if (pageCount > 0) {
    pageCount_= pageCount;
    }
}

const int Book::getPageCount() {
    return pageCount_;
}

// return true if the book is available in digital form, false ortherwise.
// Accessor Function but written as isDigital NOT getDigital.
 bool Book::isDigital()const {
    if (digital_ == true){
        return true;
        }
    return false;
 }

const void Book::setDigital() {
    digital_= true;
}