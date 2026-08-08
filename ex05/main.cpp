#include "Harl.hpp"


int main(int ac, char **av)
{
    if (ac == 2)
    {
        Harl harl;
        harl.complain(av[1]);
        return 0;
    }
    else
    {
        std::cerr << "ERROR"<< std::endl;
        return 1;
    }
    return 0;
}
