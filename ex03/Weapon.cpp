#include "Weapon.hpp"

void Weapon::setType(std::string type)
{
    _type = type;
}

std::string Weapon::getType() const
{
    return (_type);
}

Weapon::Weapon()
{
    _type = "";
}
Weapon::Weapon(std::string type)
{
    _type = type;
}

Weapon::~Weapon()
{
    std::cout<< this->_type;
    std::cout<<": is destroyed"<<std::endl;
}
