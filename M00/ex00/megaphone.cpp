#include <iostream>

char *ft_upcase(char *str)
{
	int i = 0;
	
	while(str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}	
	return (str);
}

int main(int ac, char **av)
{
	int i = 0;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		av++;
		while(av[i])
		{
			std::cout << ft_upcase(av[i++]);
			if (av[i] != NULL)
				std::cout << " ";
		}
	}
	std::cout << std::endl;
	return (0);
}
