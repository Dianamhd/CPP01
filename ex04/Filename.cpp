#include "Filename.hpp"

std::ifstream in(filename.c_str())
{
    std::string line;
    std::string content;
    while (std::getline(in, line))
        content += line + "\n";
}

filename::filename()
{
    _filename = "";
}

filename::filename(std::string filename)
{
    _filename = filename;
}

filename::~filename()
{
    std::cout<<"is destryed"<<std::endl;
}

void setType(std::string filename)
{

}

std::string getType()
{

}