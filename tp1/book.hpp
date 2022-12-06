//
//  book.hpp
//  
//
//  Created by Pedro Victor Furtado Sousa on 13/09/22.
//

#ifndef book_hpp
#define book_hpp

#include <stdio.h>

struct Book {
    char title[50];
    int page;
};

namespace readPageRef {
    int readPage(int pages);
}

int readPage();
int readPage(int* pages);
int readPage(int & pages);

Book readBook();
void readBookList(Book books[],int size) ;
void displayBook(Book & livre) ;
void displayAllBooks(Book books[],int size) ;
void exchange(Book & livre1,Book & livre2);
Book & maxBook(Book books[],int size);
Book & minBook(Book books[],int size); 

#endif /* book_hpp */
