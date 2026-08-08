#include "Zombie.hpp"

int main()
{
    randomChump("heap");
    Zombie* z = newZombie("Booder");
    z->announce();
    delete z;
    return (0);
}
