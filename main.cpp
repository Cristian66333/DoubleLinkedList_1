#include <iostream>

#include "Book.h"
#include "DoubleLinkedList.cpp"

int main() {
    DoubleLinkedList<Book>* books = new DoubleLinkedList<Book>();
    books->addNodeFirst(Book("111","Sergio","Santanas",50000));
    books->addNodeFirst(Book("222","Juan Pablo","El principito",100000));
    books->addNodeFirst(Book("333","Paula","Cien Años de Soledad",200000));

    books->addNodeLast(Book("444", "Giovany","Narraciones extraordinarias", 80000));
    books->addNodeLast(Book("555", "Juan Jose","Terror de sexto B", 20000));

    auto libroSergio = books->findNode(Book("111","","",0));

    books->addNodeAfterTo(libroSergio, Book("666", "Daniel", "Bajo la misma estrella", 1000000));

    books->addNodeBeforeTo(libroSergio, Book("777", "Kevin", "La divina comedia", 100000));

    books->addNodeSorted(Book("888", "Claudia", "Noches blancas", 50000));
    std::cout << books;

    return 0;
}
