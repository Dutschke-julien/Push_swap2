#include "PushSwap.hpp"
#include <vector>
#include <algorithm>

std::vector<int> subGroup(std::vector<int> lst, int start, int end)
{
    std::vector<int> sub;
    if (end > lst.size())
        end = lst.size();
    for (int i = start; i < end; i++)
    {
        sub.push_back(lst[i]);
    }

    return sub;

}


void divideIntoSubgroups(std::vector<int> lst, std::vector<std::vector<int>> &list_of_subgroups, int groupcount)
{
    int group_size = lst.size() / groupcount;

    for (int i = 0; i < groupcount; i++)
    {
        list_of_subgroups.push_back(subGroup(lst, i * group_size, (i + 1) * group_size));   
    }
}

bool is_in_group(int n, std::vector<int> group)
{
    for (int i = 0; i < group.size(); i++)
    {
        if (n == group[i])
            return true;
    }
    return false;
}

void pushGroupsIntoB(std::vector<std::vector<int>> list_of_subgroups, PushSwap &ps)
{
    int number_of_groups = list_of_subgroups.size();

    for (;number_of_groups > 0; number_of_groups--)
    {
        std::vector<int> group = list_of_subgroups[number_of_groups - 1];
        while (group.size() > 0)
        {
            if (ps.stack_a.empty())  // Ajoutez cette ligne
                break;
            if (is_in_group(ps.stack_a.front(), group))
            {
                group.erase(find(group.begin(), group.end(), ps.stack_a.front()));
                ps.pb();
            }
            else
                ps.ra();
        }
    }
}

void PushSwap::quickSort(int groupcount)
{
    std::vector<int> sorted_stack(stack_a.begin(), stack_a.end());
    sort(sorted_stack.begin(), sorted_stack.end());
    std::vector<std::vector<int>> list_of_subgroups;
    divideIntoSubgroups(sorted_stack, list_of_subgroups, groupcount);
    pushGroupsIntoB(list_of_subgroups, *this);
    while (stack_b.size() > 0)
        pa_max();
}