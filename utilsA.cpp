#include "PushSwap.hpp"


int PushSwap::findminA()
{
    int min = stack_a.front();
    for (int i = 0; i < stack_a.size(); i++)
    {
        if (stack_a[i] < min)
            min = stack_a[i];
    }
    return (min);
}

int PushSwap::findmaxA()
{
    int max = stack_a.front();
    for (int i = 0; i < stack_a.size(); i++)
    {
        if (stack_a[i] > max)
            max = stack_a[i];
    }
    return (max);
}

int PushSwap::findIndenxA(int n)
{
    for (int i = 0; i < stack_a.size(); i++)
    {
        if (stack_a[i] == n)
            return (i);
    }
    return (-1);
}


void PushSwap::pb_max()
{
    std::deque<int>::iterator it = stack_a.begin();

    if (findIndenxA(findmaxA()) > stack_a.size() / 2)
    {
        while (stack_a.front() != findmaxA())
            rra();
    }
    else
    {
        while (stack_a.front() != findmaxA())
            ra();
    }
    pb();
}

void PushSwap::pb_min()
{
    std::deque<int>::iterator it = stack_a.begin();

    if (findIndenxA(findminA()) > stack_a.size() / 2)
    {
        while (stack_a.front() != findminA())
            rra();
    }
    else
    {
        while (stack_a.front() != findminA())
            ra();
    }
    pb();
}
