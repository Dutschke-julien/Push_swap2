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

    void sa();
    void sb();
    void ss();


    void ra();
    void rb();
    void rr();

    void rra();
    void rrb();
    void rrr();

    std::deque<int> stack_a;
    std::deque<int> stack_b;



    int findminA();
    int findmaxA();
    int findIndenxA(int n);
    void pb_min();
    void pb_max();


    void pa_min();
    void pa_max();
    int findIndenxB(int n);
    int findminB();
    int findmaxB();

    void insert();
    void funSort();
    bool is_sorted();
    void bubbleSort();

};


#endif // __PUSH_SWAP_HPP

