#include "PushSwap.hpp"

PushSwap::PushSwap()
{

}

PushSwap::~PushSwap()
{
    stack_a.clear();
    stack_b.clear();
}

void PushSwap::print()
{
    std::deque<int>::iterator it_a = stack_a.begin();
    std::deque<int>::iterator it_b = stack_b.begin();

    while (it_a != stack_a.end() || it_b != stack_b.end())
    {
        if (it_a != stack_a.end())
        {
            std::cout << "[" << *it_a << "] ";
            it_a++;
        }
        else
            std::cout << "  ";
        if (it_b != stack_b.end())
        {
            std::cout << "[" << *it_b << "]" << std::endl;
            it_b++;
        }
        else
            std::cout << " " << std::endl;
    }
}

