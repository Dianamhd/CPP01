#include "Filename.hpp"


int main(int ac, char **av)
{
    std::string	input;
    std::string newfilename;

    if (ac == 4)
    {
        std::ifstream filename(av[1]);
        if (filename.is_open())
        {
            while (std::getline(filename, input))
            {
                newfilename += input + "\n";
            }
            filename.close();
            if (!av[2][0])
            {
                std::cout<<"Error the file is empty"<<std::endl;
                return 0;
            } 
            std::string s1 = av[2];
            std::string s2 = av[3];
            if (newfilename.find(s1) == std::string::npos)
            {
                std::cout<<"Error in the file"<<std::endl;
                return 0;
            } 
            size_t pos = newfilename.find(s1);
            while (pos != std::string::npos)
            {
                newfilename = newfilename.substr(0, pos) + s2 + newfilename.substr(pos + s1.length());
                pos = newfilename.find(s1, pos + s2.length());
            }
            std::string name = std::string(av[1]) + ".replace";
            std::ofstream out(name.c_str());
            if (out.is_open())
            {
                out << newfilename;
                out.close();
            }
            else
                std::cout << "Error: cannot create output file" << std::endl;
        }
        else 
        {
            std::cout<<"Error the file doesn't exist or empty"<<std::endl;
        }
    }
    return 0;
}
// ./replace <fichier> <s1> <s2>
// ifstream ("input file stream")
// ofstream ("output file stream")