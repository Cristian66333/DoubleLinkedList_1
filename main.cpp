#include <iostream>

#include "Book.h"
#include "DoubleLinkedList.cpp"

int main() {
    DoubleLinkedList<Book>* books = new DoubleLinkedList<Book>();
    books->addNodeFirst(Book("111","Sergio","Santanas",50000));
    books->addNodeFirst(Book("222","Juan Pablo","El principito",100000));
    books->addNodeFirst(Book("333","Paula","Cien Años de Soledad",200000));

    std::cout << books;

    return 0;
}
