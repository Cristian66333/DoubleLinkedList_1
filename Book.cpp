//
// Created by Cristian Alvarez on 14/09/26.
//

#include "Book.h"
#include <iosfwd>
#include <iostream>
Book::Book() {
}

Book::Book(string isbn, string author, string title, double price) {
    this->isbn = isbn;
    this->author = author;
    this->title = title;
    this->price = price;
}

string Book::getIsbn() {
    return this->isbn;
}

string Book::getAuthor() {
    return this->author;
}

string Book::getTitle() {
    return this->title;
}

double Book::getPrice() {
    return this->price;
}

std::ostream& operator<<(std::ostream& os, const Book& book) {
    os << book.isbn <<" - "<< book.author;
    return os;
};
