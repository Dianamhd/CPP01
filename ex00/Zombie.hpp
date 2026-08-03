#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
 
# include <string>
# include <iostream>
# include <iomanip>
# include <cctype>
 
class Zombie
{
	private:
    std::string _name;

	public:
	Zombie();
    Zombie(std::string name);
    ~Zombie();
    void set_name(std::string name);
    void announce(void);
    Zombie  zombie_index();

};
Zombie* newZombie( std::string name);
void randomChump(std::string name);
 
#endif