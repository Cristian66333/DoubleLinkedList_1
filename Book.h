//
// Created by Cristian Alvarez on 14/09/26.
//

#ifndef DOUBLELINKEDLIST_1_BOOK_H
#define DOUBLELINKEDLIST_1_BOOK_H

#include <string>

using namespace std;
class Book {
private:
    string isbn;
    string author;
    string title;
    double price;
public:
    Book();
    Book(string isbn, string author, string title, double price);

    string getIsbn();
    string getAuthor();
    string getTitle();
    double getPrice();

    friend std::ostream& operator<<(std::ostream& os, const Book& book);



};


#endif //DOUBLELINKEDLIST_1_BOOK_H
