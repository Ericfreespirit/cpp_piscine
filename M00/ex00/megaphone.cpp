#include <iostream>
#include <string>


int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		av++;
		while(*av)
		{
			for(int i=0; (*av)[i];i++)
				std::cout << (char)toupper((*av)[i]);
			if (*av != NULL)
				std::cout << " ";
			av++;
		}
	}
	std::cout << std::endl;
	return (0);
}
