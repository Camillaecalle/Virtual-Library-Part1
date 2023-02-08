#include "Book.hpp"
#include <iostream>
#include <string> 

//Default Constructor
Book::Book() {
    title_ = "";
    author_ = "";
    pageCount_= 0;
    digital_= false;
}

std::string Book::getTitle() const{ //getting so no parameter
    return title_; 
}

void Book::setTitle(std::string nameTitle) {
    title_= nameTitle;
}

std::string Book::getAuthor() const{
    return author_;
}

void Book::setAuthor(std::string nameAuthor) {
     author_= nameAuthor;
}

void Book::setPageCount(int pageCount) {
    if (pageCount > 0) 
    {
    pageCount_=pageCount;
    }
}

int::Book::getPageCount() const {
    return pageCount_;
}

void Book::setDigital (bool digitalFlag){
    digital_=true;
}

// bool Book::isDigital () const {
//     if (){

//         return true;
//     }
// }


//   /**
//    @return true if the book is available in digital form, false otherwise

//    Note: this is an accessor function and must follow the same convention as all accessor functions even if it is not called getDigital
//   */
//   isDigital