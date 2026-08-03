#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout<< _name<<std::endl;
    std::cout<< _weapon.getType()<<std::endl;
}

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{

}



// Un constructeur qui prend un nom et une arme, et qui initialise ces deux attributs 
// (attention : une référence membre doit être initialisée dans la liste d'initialisation 
// du constructeur, pas dans le corps — c'est une subtilité qu'on pourra creuser si tu bloques dessus)
// Une méthode attack() qui affiche un message avec le nom et le type de l'arme 
// (via getType())