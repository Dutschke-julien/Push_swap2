#include "PushSwap.hpp"

void PushSwap::add_node_front(int data, Node **stack)
{
    Node *new_node = new Node;

    if (*stack != nullptr)
        (*stack)->next = new_node;
    new_node->prev = *stack;
    new_node->data = data;
    new_node->next = nullptr;    
}

PushSwap::PushSwap(Node* a, Node* b) : _stackA(a), _stackB(b)
{
    std::cout << "PushSwap constructor" << std::endl;    
}

PushSwap::PushSwap()
{
    _stackA = new Node(0);
    _stackB = new Node(0);
}

void PushSwap::print_node()
{
    iterator it(_stackA);
    it.begin();
    while (it._node != nullptr)
    {
        std::cout << it._node->data << std::endl;
        it++;
    }
}

PushSwap::~PushSwap()
{
    std::cout << "PushSwap destructor" << std::endl;
}
