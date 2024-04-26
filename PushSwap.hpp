#ifndef __PUSHSWAP_HPP
#define __PUSHSWAP_HPP

#include <iostream>
#include <sstream>

#include "LinkedList/LinkedList.hpp"


// ! PA PB RA RB RRA RRB RRR

class PushSwap
{
    public:
        PushSwap();
        ~PushSwap();
        void print();


        LinkedList<int> _stackA;
        LinkedList<int> _stackB;


        //methods
        void pa();
        void pb();
};


#endif // __PUSH_SWAP_HPP

