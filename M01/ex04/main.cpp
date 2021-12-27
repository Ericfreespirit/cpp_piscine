#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int    str_error(int ret, std::string text)
{
    std::cout << text << std::endl;
    return (ret);
}

int main (int ac, char **av)
{
    std::string      filename;
    size_t      pos;
    std::ofstream    ofs;
    std::ifstream    ifs;
    std::string      line;
    
    if (ac != 4)
        return(str_error(0, "Error: wrong argument, need input like this -> [filename][s1][s2]"));
    if (!*av[2] || !*av[3])
        return(str_error(0, "Error: av[2] or av[3] is empty"));
    filename = ((std::string)av[1]).append(".replace");
    ofs.open(filename);
    ifs.open(av[1]);
    if (!ofs.is_open() || !ifs.is_open())
        return (str_error(0, "Error: fail open file"));    
    while (getline(ifs, line))
    {
        while ((pos = line.find(av[2])) != std::string::npos)
        {
			ofs << line.substr(0, pos) << av[3];
			line = line.substr(pos + strlen(av[2]));
        }
        if (ofs.eof())
            break ;
        if (!line.empty())
            ofs << line;
        ofs << std::endl;
    }
    ifs.close();    
    ofs.close();
    return (0);
}