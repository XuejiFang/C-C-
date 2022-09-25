#pragma once
#include "Node.h"
#include "Polynomial.h"
#include <iostream>
typedef int Status;
using namespace std;

template<class ElemType>
class LinkList {
protected:
    Node<ElemType>* head;
    int length;
    friend class Polynomial;
public:
    LinkList();
    ~LinkList();
    void Clear();
    void show();
    Status GetElem(int i, ElemType& e) const;
    Status SetElem(int i, const ElemType& e);
    Status DeleteElem(int i, ElemType& e);
};

template<class ElemType>
void LinkList<ElemType>::show() {
    Node<ElemType>* p = head->next;
    while (p != NULL) {
        head->next = p->next;
        cout << p->data;
        p = head->next;
    }
}

template<class ElemType>
LinkList<ElemType>::LinkList() {
    head = new Node<ElemType>;
    //assert(head);
    length = 0;
}

template<class ElemType>
LinkList<ElemType>::~LinkList() {
    Clear();
    delete head;
}

template<class ElemType>
void LinkList<ElemType>::Clear() {
    Node<ElemType>* p = head->next;
    while (p != NULL) {
        head->next = p->next;
        delete p;
        p = head->next;
    }
    length = 0;
}

template<class ElemType>
Status LinkList<ElemType>::GetElem(int i, ElemType& e) const {
    if (i<1 || i>length)
        //return RANGE_ERROR;
        return -1;
    else {
        Node<ElemType>* p = head->next;
        int count;
        for (count = 1; count < i; count++)
            p = p->next;
        e = p->data;
        //return ENTRY_FOUND;
        return -1;
    }
}

template<class ElemType>
Status LinkList<ElemType>::SetElem(int i, const ElemType& e) {
    if (i<1 || i>length)
        //return RANGE_ERROR;
        return -1;
    else {
        Node<ElemType>* p = head->next;
        int count;
        for (count = 1; count < i; count++)
            p = p->next;
        p->data = e;
        //return SUCCES;;
        return -1;
    }
}

template<class ElemType>
Status LinkList<ElemType>::DeleteElem(int i, ElemType& e) {
    if (i<1 || i>length)
        //return RANGE_ERROR;
        return -1;
    else {
        Node<ElemType>* p = head,*q;
        int count;
        for (count = 1; count < i; count++)
            p = p->next;
        q = p->next;
        p->next = q->next;
        e = q->data;
        length--;
        delete q;
        //return SUCCESS;
        return -1;
    }
}