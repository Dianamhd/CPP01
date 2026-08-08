#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout<< _name<<std::endl;
    std::cout<< _weapon.getType()<<std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{

}
