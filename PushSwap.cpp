#include "PushSwap.hpp"

PushSwap::PushSwap(){
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

int PushSwap::findIndenxB(int n)
{
    for (int i = 0; i < stack_b.size(); i++)
    {
        if (stack_b[i] == n)
            return (i);
    }
    return (-1);
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

bool hasOddNumbers(const std::deque<int>& stack)
{
    for (int num : stack)
    {
        if (num % 2 != 0)
            return true;
    }
    return false;
}

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

void PushSwap::bubbleSort()
{
   // Boucle sur chaque élément de la pile
    for (int i = 0; i < stack_a.size(); i++)
    {
        // Indicateur pour vérifier si un échange a eu lieu lors de ce passage
        bool swapped = false;

        // Boucle sur les éléments non triés restants de la pile
        for (int j = 0; j < stack_a.size() - i; j++)
        {
            // Si les deux premiers éléments sont dans le mauvais ordre, les échanger
            if (stack_a.front() > stack_a[1])
            {
                sa();
                swapped = true;
            }
            // Faire tourner la pile pour amener le prochain élément non trié en haut
            ra();
        }

        // Faire tourner la pile dans l'autre sens pour remettre le plus grand élément non trié en bas
        for (int j = 0; j < stack_a.size() - i; j++)
            rra();

        // Si aucun échange n'a eu lieu lors de ce passage, la pile est triée
        if (!swapped)
            break;
    }
}



