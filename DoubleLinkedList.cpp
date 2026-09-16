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

template<typename T>
void DoubleLinkedList<T>::addNodeLast(T info) {
    if (isEmpty()) addNodeFirst(info);

    Node<T> *newNode = new Node<T>(info);

    newNode->previous = tail;
    tail->next = newNode;
    tail = newNode;

    size++;
}

template<typename T>
void DoubleLinkedList<T>::addNodeAfterTo(Node<T> *current, T info) {
    if (current == tail) {
        addNodeLast(info);
        return;
    };

    Node<T>* newNode = new Node<T>(info);

    newNode->next = current->next;
    newNode->previous = current;
    current->next = newNode;
    newNode->next->previous = newNode;
    size++;
}

template<typename T>
void DoubleLinkedList<T>::addNodeBeforeTo(Node<T> *current, T info) {
    if (current == head) addNodeFirst(info);
    addNodeAfterTo(current->previous, info);
    size++;
}

template<typename T>
void DoubleLinkedList<T>::addNodeSorted(T info) {
    if (isEmpty()) {
        addNodeFirst(info);

    }else {
        if (info > head->info) {
            addNodeBeforeTo(head, info);
            return;
        }else {
            Node<T>* aux = tail;
            while (aux!=head && aux->info > info) {
                aux = aux->previous;
            }
            addNodeBeforeTo(aux, info);
        }
    }
}

template<typename T>
Node<T> * DoubleLinkedList<T>::findNode(T info) {
    Node<T>* aux = tail;
    while (aux!=nullptr) {
        if(aux->info == info) {
            return aux;
        }
        aux = aux->previous;
    }
    return nullptr;
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


