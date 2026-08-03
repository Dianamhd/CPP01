#include "Zombie.hpp"
    
void Zombie::announce(void)
{
    std::cout<< this->_name;
    std::cout<< ":  BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::Zombie()
{
    _name = "Bob";
}
Zombie::Zombie(std::string name)
{
	_name = name;
}

void Zombie::set_name(std::string name)
{
    _name = name;
}

Zombie::~Zombie()
{
    std::cout<< this->_name;
    std::cout<< ": is destroyed"<<std::endl;
}
