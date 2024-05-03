#include "PushSwap.hpp"

void PushSwap::pa_max()
{
    std::deque<int>::iterator it = stack_b.begin();

    if (findIndenxB(findmaxB()) > stack_b.size() / 2)
    {
        while (stack_b.front() != findmaxB())
            rrb();
    }
    else
    {
        while (stack_b.front() != findmaxB())
            rb();
    }
    pa();
}

void PushSwap::pa_min()
{
    std::deque<int>::iterator it = stack_b.begin();

    if (findIndenxB(findminB()) > stack_b.size() / 2)
    {
        while (stack_b.front() != findminB())
            rrb();
    }
    else
    {
        while (stack_b.front() != findminB())
            rb();
    }
    pa();
}

int PushSwap::findminB()
{
    int min = stack_b.front();
    for (int i = 0; i < stack_b.size(); i++)
    {
        if (stack_b[i] < min)
            min = stack_b[i];
    }
    return (min);
}

int PushSwap::findmaxB()
{
    int max = stack_b.front();
    for (int i = 0; i < stack_b.size(); i++)
    {
        if (stack_b[i] > max)
            max = stack_b[i];
    }
    return (max);
}

int PushSwap::findIndenxB(int n)
{
    for (int i = 0; i < stack_b.size(); i++)
    {
        if (stack_b[i] == n)
            return (i);
    }
    return (-1);
}
