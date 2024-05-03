#include "PushSwap.hpp"

void PushSwap::insert()
{
    while(stack_a.size())
    {
        while(stack_a.front() != findminA())
            ra();
        pb();
    }
    while(stack_b.size())
    {
        pa();
    }
}