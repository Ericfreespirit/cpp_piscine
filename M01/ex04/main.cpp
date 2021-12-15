#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

int    str_error(int ret, string text)
{
    cout << text << endl;
    return (ret);
}

int main (int ac, char **av)
{
    string      filename;
    size_t      pos;
    ofstream    ofs;
    ifstream    ifs;
    string      line;
    
    if (ac != 4)
        return(str_error(0, "Error: wrong argument, good input [filename][s1][s2]"));
    if (!*av[2] || !*av[3])
        return(str_error(0, "Error: av[2] or av[3] is empty"));
    filename = ((string)av[1]).append(".replace");
    ofs.open(filename);
    ifs.open(av[1]);
    if (!ofs.is_open() || !ifs.is_open())
        return (str_error(0, "Error: fail open file"));    
    while (getline(ifs, line))
    {
        while ((pos = line.find(av[2])) != string::npos)
        {
			ofs << line.substr(0, pos) << av[3];
			line = line.substr(pos + strlen(av[2]));
        }
        if (ofs.eof())
            break ;
        ofs << endl;
    }
    ifs.close();    
    ofs.close();
    return (0);
}