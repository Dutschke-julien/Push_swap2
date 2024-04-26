#ifndef __LINKEDLIST_HPP__
# define __LINKEDLIST_HPP__

#include "Node.hpp"
#include <iostream>

template<typename T>
class LinkedList 
{
    public:
    Node<T>* head;
    Node<T>* tail;

    LinkedList();
    ~LinkedList();

    void add_back(T data);
    Node<T>* findSmallest();
    Node<T>* findLargest();
    void add_front(T data);
    void print();

    class Iterator
    {
        private:
            Node<T>* pointer;

        public:
            Iterator(Node<T>* ptr);
            Iterator& operator++();
            Iterator& operator--();
            Node<T>* operator*();
            bool operator!=(const Iterator& other);
            friend std::ostream& operator<<(std::ostream& os, const typename LinkedList<T>::Iterator& it)
            {
            if (it.pointer)
                os << *(it.pointer);
            else
                os << "null";
            return os;
          }

    };
        Iterator begin();
        Iterator end();
};


#include "LinkedList.tpp"
#include "Iterator.tpp"

#endif


