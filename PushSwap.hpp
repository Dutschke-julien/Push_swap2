#ifndef __PUSHSWAP_HPP__
#define __PUSHSWAP_HPP__

#include <iostream>
#include <string>
#include <sstream>

typedef struct  Node
{


    Node() : data(0), next(nullptr), prev(nullptr) {}
    Node(int data) : data(data), next(nullptr), prev(nullptr) {}
    int data;



    Node *next;
    Node *prev;
}              Node;



class PushSwap
{
    private:
    Node *_stackA;
    Node *_stackB;

    public:
    PushSwap();
    PushSwap(Node* a, Node* b);
    ~PushSwap();

    //methods
    void add_node_front(int data, Node** stack);
    void print_node();
    Node* get_stackA() { return (_stackA); }
    Node* get_stackB() { return (_stackB); }
    //imbriqued class
    class iterator
    {

        public:
        Node *_node;
        iterator(Node *node) : _node(node){}
        iterator () : _node(nullptr){}
        ~iterator(){}

        //operators
        iterator& operator++(int);
        iterator& operator--(int);
        iterator& operator=(const iterator& it);
        iterator& operator=(Node *node);
        Node* operator*();
        iterator& begin();
        iterator& begin(Node *node);
        iterator& end();
        iterator& end(Node *node);

    };
};

#endif // __PUSHSWAP_HPP__