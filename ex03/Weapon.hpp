#ifndef WEAPON_HPP
# define WEAPON_HPP
 
# include <string>
# include <iostream>
# include <iomanip>
# include <cctype>

 
class Weapon
{
	private:
    std::string _type;

	public:
	Weapon();
    Weapon(std::string name);
    ~Weapon();
    void setType(std::string type);
    std::string getType() const;

};

#endif