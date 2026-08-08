#ifndef Harl_HPP
# define Harl_HPP
 
# include <string>
# include <iostream>
 
class Harl
{
	private:
    void debug();
    void info();
    void warning();
    void error();

	public:
    Harl();
    ~Harl();

    void complain(const std::string &level);
};

#endif