#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    return new Zombie(name);
}

    // Zombie* newZombie(std::string name);
    //  — creates a zombie on the heap (using new) 
    // and returns a pointer to it

    // The zombie needs to survive after the function returns
    // that's literally why the function returns a pointer to it.
    // If you allocated it on the stack here,
    // it would be destroyed the moment the function ends, 
    // and you'd return a pointer to garbage/destroyed memory (a dangling pointer) 
    // — undefined behavior. So it must be allocated on the heap with new, 
    // which persists until you explicitly delete it.