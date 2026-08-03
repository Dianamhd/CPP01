#include "Zombie.hpp"

int main()
{
    int n = 5;
    Zombie *z = zombieHorde(n,"Bob");
    for (int i = 0; i < n; i++)
    {
        z[i].announce();
    }
    delete[] z;
    return (0);
}
// Call randomChump("...") a few times and observe that announce + destructor both fire automatically.
// Call newZombie("...") to get a pointer, call ->announce() on it, and then remember to delete it yourself — 
// this is the part beginners often forget, causing a memory leak. 
// The exercise wants you to notice that the destructor message does not appear until you explicitly delete the heap zombie.
// paying close attention to when each destructor message prints, and don't forget to delete the heap-allocated zombie(s).