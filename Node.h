//
// Created by Cristian Alvarez on 14/09/26.
//

#ifndef DOUBLELINKEDLIST_1_NODE_H
#define DOUBLELINKEDLIST_1_NODE_H

template <typename T>
class DoubleLinkedList;

template <typename T>
class Node {
    friend class DoubleLinkedList<T>;
private:
    T info;
    Node<T>* next;
    Node<T>* previous;
public:
    Node(T info) {
        this->info = info;
        next = nullptr;
        previous = nullptr;
    }

    T getInfo() const {
        return info;
    }

    Node<T> * getNext() const {
        return next;
    }

    Node<T> * getPrevious() const {
        return previous;
    }
};

#endif //DOUBLELINKEDLIST_1_NODE_H
