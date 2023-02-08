//Camilla Calle
//Febuary 6, 2023
//Book.cpp
//Book.cpp is the implementation. Here I gave the functions (that I have in my interface file) 
//functionality. 

#include "Book.hpp"

  /**
      Default constructor.
      Default-initializes all private members. Booleans are default-initialized to False.
   */

Book::Book() {
    title_= "";
    author_= "";
    page_count_= 0;
    digital_ = false;
}

/**
      Parameterized constructor.
      @param      : The title of the book (a string)
      @param      : The author of the book (a string)
      @param      : The number of pages in the book (a positive int)
      @param      : A flag indicating whether the book is in digital form (a Boolean),
                    with default value False
      @post       : The private members are set to the values of the corresponding parameters.
 */

Book::Book(std::string title, std::string author, int pageCount, bool digital) {
    title_= title;
    author_= author;
    page_count_= pageCount;
    digital_= digital;
}

  /**
    @param  : the title of the Book
    @post   : sets the Book's title to the value of the parameter
  */


void Book::setTitle(const std::string & title)  {
    title_ = title;
}

  /**
      @return : the title of the Book
   */

const std::string Book::getTitle() const{ //getting so no parameter
    return title_; 
}

   /**
     @param  : the name of the author of the Book
     @post   : sets the Book's author to the value of the parameter
   */

void Book::setAuthor(const std::string & author) {
     author_ = author;
}

   /**
       @return : the author of the Book
    */

const std::string Book::getAuthor() const{
    return author_;
}

   /**
     @param  : a positive integer page count
     @pre    : page count > 0 - books cannot have a negative number of pages
     @post   : sets the page count to the value of the parameter
   */
 
void Book::setPageCount(const int & pageCount) { 
    if (pageCount > 0) {
    page_count_= pageCount;
    }
}

   /**
       @return : the page count
    */

const int Book::getPageCount() const{
    return page_count_;
}


   /**
    @post   : sets the digital flag to true
   */

void Book::setDigital() {
    digital_= true;
}

  /**
   @return true if the book is available in digital form, false otherwise

   Note: this is an accessor function and must follow the same convention as all accessor functions even if it is not called getDigital
  */

 bool Book::isDigital() const {
    if (digital_ == true){
        return true;
        }
    return false;
 }

