#include <iostream>
#include <string>
#include <fstream>

void    ft_replace(std::string file, std::string s1, std::string s2)
{
    std::string line;
    std::ifstream in (file);
    std::ofstream out (file + ".replace");
    size_t i;

    if (in && out)
    {
        while (std::getline(in, line))
        {
            i = line.find(s1);
            while (i != std::string::npos)
            {
                line.erase(i, s1.size());
                line.insert(i, s2);
                i = i + s2.size();
                i = line.find(s1, i);
            }
            out << line << "\n";
        }
    }
    else 
    {
        std::cout << "issue when opening files" << std::endl;
    }
    in.close();
    out.close();
}

int main (int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Wrong argument " << std::endl;
        return (1);
    }
    ft_replace(argv[1], argv[2], argv[3]);
    return (0);
}