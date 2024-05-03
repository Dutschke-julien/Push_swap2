#ifndef __PUSHSWAP_HPP
#define __PUSHSWAP_HPP

#include <iostream>
#include <sstream>
#include <deque>
#include <vector>
#include <algorithm>

// ! PA PB RA RB RRA RRB RRR

class PushSwap
{

    public:

    std::deque<int> stack_a;
    std::deque<int> stack_b;


    PushSwap();
    ~PushSwap();

    //methods
    void print();
    bool is_sorted();
    //end methods

    //instructions
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
    //end instructions


    //utils for A
    int findminA();
    int findmaxA();
    int findIndenxA(int n);
    void pb_min();
    void pb_max();
    //utlis end


    //utils for B
    void pa_min();
    void pa_max();
    int findIndenxB(int n);
    int findminB();
    int findmaxB();
    //end utils

    //utils for both
    
    //end utils

    //sort
    void insert();
    void funSort();
    void bubbleSort();
    void quickSort(int groupcount);
    //end sort
};


#endif // __PUSH_SWAP_HPP

