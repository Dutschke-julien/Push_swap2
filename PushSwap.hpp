#ifndef __PUSHSWAP_HPP
#define __PUSHSWAP_HPP

#include <iostream>
#include <sstream>

#include "LinkedList/LinkedList.hpp"

class PushSwap
{
    private:
    LinkedList<int> _stackA;
    LinkedList<int> _stackB;

    public:
        PushSwap();
        ~PushSwap();
};


#endif // __PUSH_SWAP_HPP

