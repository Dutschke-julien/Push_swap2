#include "PushSwap.hpp"

void PushSwap::funSort()
{
    while (stack_a.size())
    {
        pb_min();
        pb_max();
    }
    while (stack_b.size())
    {
        pa_max();
    }
}