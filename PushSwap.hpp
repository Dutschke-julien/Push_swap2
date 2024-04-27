#ifndef __PUSHSWAP_HPP
#define __PUSHSWAP_HPP

#include <iostream>
#include <sstream>

#include "LinkedList/LinkedList.hpp"


// ! PA PB RA RB RRA RRB RRR

class PushSwap
{
    private:
        LinkedList<int> stackA;
        LinkedList<int> stackB;

    public:
        PushSwap();
        ~PushSwap();

    //methods
    void print();

    void pa();
    void pb();

    void ra();
    void rb();
    
    void rra();
    void rrb();
    void rrr();


};


#endif // __PUSH_SWAP_HPP

