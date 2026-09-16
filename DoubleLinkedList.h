//
// Created by Cristian Alvarez on 14/09/26.
//

#ifndef DOUBLELINKEDLIST_1_DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_1_DOUBLELINKEDLIST_H
#include "Node.h"


template <typename T>
class DoubleLinkedList {
private:
    Node<T>* head;
    Node<T>* tail;
    int size;
public:
    DoubleLinkedList();
    ~DoubleLinkedList();


    bool isEmpty();

    void addNodeFirst(T info);

    void addNodeLast(T info);

    void addNodeAfterTo(Node<T>* current, T info);

    void addNodeBeforeTo(Node<T>* current, T info);

    void addNodeSorted(T info);

    Node<T>* findNode(T info);

    Node<T> * getHead() const {
        return head;
    }
};



#endif //DOUBLELINKEDLIST_1_DOUBLELINKEDLIST_H
