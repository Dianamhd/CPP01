#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie  zombie_index(name);
    zombie_index.announce();
}
