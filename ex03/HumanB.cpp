#include "HumanB.hpp"

void    HumanB::setWeapon(Weapon* weapon)
{
    _weapon = weapon;
}

void HumanB::attack()
{
    if (_weapon != NULL)
    {
        
        std::cout<< _weapon->getType()<<std::endl;
    }
    else
    std::cout<< "HumanB doesn't have a weapon"<<std::endl;
}

HumanB::HumanB()
{
    _name = "";
    _weapon = NULL;
}
HumanB::HumanB(std::string name)
{
    _name = name;
    _weapon = NULL;
}

HumanB::~HumanB()
{
    std::cout<< "is destroyed..."<<std::endl;
}
