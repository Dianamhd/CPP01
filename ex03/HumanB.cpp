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
    std::cout<< "HumanB does'nt have a weapon"<<std::endl;
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
// Un attribut privé _name
// Un attribut privé qui est un pointeur vers une Weapon 
// (pas une référence — puisque l'arme peut être absente au départ)
// Un constructeur qui prend juste un nom, et initialise le pointeur d'arme à NULL 
// (l'arme n'est pas connue à la création)
// Une méthode setWeapon qui prend un pointeur vers une Weapon (pas une copie par 
// valeur comme tu l'as actuellement dans HumanB.cpp) et l'assigne à l'attribut
// Une méthode attack() qui vérifie d'abord si le pointeur n'est pas NULL avant 
// d'afficher le message (sinon comportement indéfini si tu accèdes à un pointeur NULL)