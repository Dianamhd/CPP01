#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie  zombie_index(name);
    zombie_index.announce();
}

// void randomChump(std::string name); 
// — creates a zombie on the stack (as a local variable) 
// and calls announce() on it

// The zombie is only needed inside the function — 
// you create it, make it announce itself, and then you're done with it. 
// Since it's a local (stack) variable, 
// it will automatically be destroyed when the function returns 
// (its destructor runs automatically, which is why you'll see the destructor message print right after the announce). 
// This is efficient — no manual cleanup needed, no memory leak risk.