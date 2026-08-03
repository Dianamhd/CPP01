#ifndef Filename_HPP
# define Filename_HPP
 
# include <string>
# include <iostream>
# include <iomanip>
# include <cctype>
# include <fstream>

 
class filename
{
	private:
    std::string _filename;

	public:
	filename();
    filename(std::string filename);
    ~filename();
    void setType(std::string filename);
    std::string getType() const;

};

#endif