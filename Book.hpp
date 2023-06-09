//Camilla Calle
//Feburary 6, 2023
//Book.hpp
//Book.hpp is the interface. Here I created the class Book with the assigned public, private member variables, and public 
//member functions. 

#ifndef BOOK_HPP
#define BOOK_HPP
#include <string>

/*
Created the Book class and declared the private member variables. 
private:
  - The title of the book (a string)
  - The author of the book (a string)
  - The page count (an integer)
  - A flag indicating whether the book is available in digital form (a Boolean) */

class Book { 
private:
std::string title_;
std::string author_; 
int page_count_;
bool digital_;  

public: 

  /**
      Default constructor.
      Default-initializes all private members. Booleans are default-initialized to False.
   */

Book(); 

/**
      Parameterized constructor.
      @param      : The title of the book (a string)
      @param      : The author of the book (a string)
      @param      : The number of pages in the book (a positive int)
      @param      : A flag indicating whether the book is in digital form (a Boolean),
                    with default value False
      @post       : The private members are set to the values of the corresponding parameters.
 */

Book(std::string title, std::string author, int pageCount, bool digital = false);

  /**
   getTitle
      @return : the title of the Book
   */

const std::string getTitle() const; //getter


  /**
   * setTitle
    @param  : the title of the Book
    @post   : sets the Book's title to the value of the parameter
  */


void setTitle(const std::string & title);//setter

   /**
    getAuthor
       @return : the author of the Book
    */

const std::string getAuthor() const; //getter

   /**
    setAuthor
     @param  : the name of the author of the Book
     @post   : sets the Book's author to the value of the parameter
   */

void setAuthor(const std::string & author); //setter

   /**
    setPageCount
     @param  : a positive integer page count
     @pre    : page count > 0 - books cannot have a negative number of pages
     @post   : sets the page count to the value of the parameter
   */

void setPageCount(const int & pageCount); //setter


   /**
    getPageCount
       @return : the page count
    */

 
const int getPageCount() const; //getter

   /**
    setDigital
    @post   : sets the digital flag to true
   */

void setDigital(); //setter

  /**
   isDigital
   @return true if the book is available in digital form, false otherwise

   Note: this is an accessor function and must follow the same convention as all accessor functions even if it is not called getDigital
  */

bool isDigital() const; //getter

};
#endif