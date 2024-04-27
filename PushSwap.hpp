#ifndef __PUSHSWAP_HPP
#define __PUSHSWAP_HPP

#include <iostream>
#include <sstream>
#include <deque>


// ! PA PB RA RB RRA RRB RRR


class PushSwap
{
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

    std::deque<int> stack_a;
    std::deque<int> stack_b;

};


#endif // __PUSH_SWAP_HPP

