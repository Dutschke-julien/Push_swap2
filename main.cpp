#include "PushSwap.hpp"

int check_error(int ac, char **av, PushSwap ps)
{
    std::stringstream ss;

    if (ac > 2)
    {
        for (int i = 1; av[i]; i++)
        {
            ss.str(av[i]);

            int n;
            ss >> n;
            if (ss.fail() || !ss.eof())
            {
                std::cout << "Error: Invalid argument" << std::endl;
                return (1);
            }
            ps.add_node_front(n, (Node**)(ps.get_stackA()));
            ss.clear();
        }
    }
    return (0);
}



int main(int ac, char **av)
{
    PushSwap ps;
 
    if (check_error(ac, av, ps))
        return (1);
    ps.print_node();
    return (0);
}
