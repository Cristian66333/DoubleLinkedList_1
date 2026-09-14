//
// Created by Cristian Alvarez on 14/09/26.
//

#include "DoubleLinkedList.h"

#include <iosfwd>
#include <ostream>

template<typename T>
DoubleLinkedList<T>::DoubleLinkedList() {
    head = nullptr;
    tail = nullptr;
    size = 0;
}

template<typename T>
bool DoubleLinkedList<T>::isEmpty() {
    return this->head == nullptr && this->tail == nullptr;
}

template<typename T>
void DoubleLinkedList<T>::addNodeFirst(T info) {
    Node<T>* newNode = new Node<T>(info);
    if (isEmpty()) {
        this->head = newNode;
        this->tail = newNode;
    }else {
        newNode->next = head;
        head->previous = newNode;
        this->head = newNode;
    }
    size ++;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, DoubleLinkedList<T>* list) {
    Node<T>* aux = list->getHead();
    while (aux!=nullptr) {
        os << aux->getInfo()<<"\n";
        aux = aux->getNext();
    }
    return os;
};

template<typename T>
DoubleLinkedList<T>::~DoubleLinkedList() {
}


