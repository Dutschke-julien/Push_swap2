#include "PushSwap.hpp"

int check_error(int ac, char **av)
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
            ss.clear();
        }
    }
    return (0);
}



int main(int ac, char **av)
{
    if (check_error(ac, av))
        return (1);
    return (0);
}

