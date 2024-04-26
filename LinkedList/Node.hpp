#ifndef __NODE_HPP__
# define __NODE_HPP__

template<typename T>
class Node
{
    public:
    T _data;
    Node<T>* prev;
    Node<T>* next;

    Node() : _data(0), prev(nullptr), next(nullptr) {}
    Node(T data) : _data(data), prev(nullptr), next(nullptr) {}
};

#endif // __NODE_HPP__