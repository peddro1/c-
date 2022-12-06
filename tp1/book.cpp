//
//  book.cpp
//  
//
//  Created by Pedro Victor Furtado Sousa on 13/09/22.
//

#include <iostream>
#include "book.hpp"

int readPage() {
    int page = 0;
    while(page < 2 || page>2000)  {
        std::cout << " enter page numbers " << std::endl;
        std::cin >> page;
    }
    std::cout << "valid page numbers" << std::endl;
    return page;
}

int readPage(int* initPage) {
    int page= 0;
    while(page < 2 || page>2000) {
        std::cout <<  " enter page numbers " << std::endl;
        std::cin >> page;
    }
    std::cout << "valid page numbers" << std::endl;
    *initPage = page;
    return *initPage;
}


int readPageRef::readPage(int initPage) {
    int page = 0;
    while( page < 2 || page > 2000) {
        std::cout << " enter page numbers "  << std::endl;
        std::cin >> page;
    }
    std::cout <<"valid page numbers"  << std::endl;
    initPage = page;
    return initPage;
}


int readPage(int & initPageRef) {
    int page= 0;
    while(page < 2 || page>2000)  {
        std::cout <<  " enter page numbers "  << std::endl;
        std::cin >> page;
    }
    std::cout << "valid page numbers" << std::endl;
    initPageRef = page;
    return initPageRef;
}

Book readBook(){
    Book livre;
    int & page = livre.page;
    livre.page = readPage(page);
    std::cin >> livre.title;
    return livre;
}


void readBookList(Book books[],int size) {
    for (int i = 0; i < size; i++) {
        books[i] = readBook();
    }
}

void displayBook(Book & livre) {
    std::cout <<"Book name:" << livre.title << ": " << livre.page << std::endl;
}

void displayAllBooks(Book books[],int size) {
    for (int i = 0;i < size; i++) {
        displayBook(books[i]);
    }
    std::cout << "" << std::endl;
}

void exchange(Book & livre1,Book & livre2) {
    int page = livre1.page;
    livre1.page = livre2.page;
    livre2.page = page;
}

Book & maxBook(Book books[],int size) {
    int maxPage = books[0].page;
    int maxIndex;
    for (int i = 0; i < size; i++) {
        if (books[i].page > maxPage) {
            maxPage = books[i].page;
            maxIndex = i;
        }
    }
    return books[maxIndex];
}


Book & minBook(Book books[],int size) {
    int minPage = books[0].page;
    int minIndex;
    for (int i = 0; i < size; i++) {
        if (books[i].page < minPage) {
            minPage = books[i].page;
            minIndex = i;
        }
    }
    return books[minIndex];
}


