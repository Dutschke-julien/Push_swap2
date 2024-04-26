#ifndef __PUSHSWAP_HPP
#define __PUSHSWAP_HPP

#include <iostream>
#include <sstream>

#include "LinkedList/LinkedList.hpp"

class PushSwap
{
    public:
        PushSwap();
        ~PushSwap();
        void print();

        
        LinkedList<int> _stackA;
        LinkedList<int> _stackB;
};


#endif // __PUSH_SWAP_HPP

