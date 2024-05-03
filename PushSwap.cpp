#include "PushSwap.hpp"

PushSwap::PushSwap()
{
}

PushSwap::~PushSwap()
{
    stack_a.clear();
    stack_b.clear();
}

bool PushSwap::is_sorted()
{
    for (int i = 0; i < stack_a.size() - 1; i++)
    {
        if (stack_a[i] > stack_a[i + 1])
            return (false);
    }
    if (!stack_b.empty())
        return (false);
    return (true);
}

void PushSwap::print()
{
    std::deque<int>::iterator it_a = stack_a.begin();
    std::deque<int>::iterator it_b = stack_b.begin();

    std::cout << "Stack A: ";
    for (; it_a != stack_a.end(); it_a++)
    {
        std::cout << *it_a << " ";
    }
    std::cout << std::endl;

    std::cout << "Stack B: ";
    for (; it_b != stack_b.end(); it_b++)
    {
        std::cout << *it_b << " ";
    }
    std::cout << std::endl;

}

