#include "PushSwap.hpp"

void PushSwap::pa()
{
    std::cout << "pa" << std::endl;
    if (stack_b.empty())
        return;
    stack_a.push_front(stack_b.front());
    stack_b.pop_front();
}

void PushSwap::pb()
{
    std::cout << "pb" << std::endl;
    if (stack_a.empty())
        return;
    stack_b.push_front(stack_a.front());
    stack_a.pop_front();
}

void PushSwap::ra()
{
    std::cout << "ra" << std::endl;
    if (stack_a.empty())
        return;
    stack_a.push_back(stack_a.front());
    stack_a.pop_front();
}

void PushSwap::rb()
{
    std::cout << "rb" << std::endl;
    if (stack_b.empty())
        return;
    stack_b.push_back(stack_b.front());
    stack_b.pop_front();
}

void PushSwap::rr()
{
    ra();
    rb();
}

void PushSwap::rra()
{
    std::cout << "rra" << std::endl;
    if (stack_a.empty())
        return;
    stack_a.push_front(stack_a.back());
    stack_a.pop_back();
}

void PushSwap::rrb()
{
    std::cout << "rrb" << std::endl;
    if (stack_b.empty())
        return;
    stack_b.push_front(stack_b.back());
    stack_b.pop_back();
}

void PushSwap::rrr()
{
    rra();
    rrb();
}

void PushSwap::sa()
{
    std::cout << "sa" << std::endl;
    if (stack_a.size() < 2)
        return;
    int tmp = stack_a.front();
    stack_a.front() = stack_a[1];
    stack_a[1] = tmp;
}

void PushSwap::sb()
{
    std::cout << "sb" << std::endl;
    if (stack_b.size() < 2)
        return;
    int tmp = stack_b.front();
    stack_b.front() = stack_b[1];
    stack_b[1] = tmp;
}

void PushSwap::ss()
{
    sa();
    sb();
}
