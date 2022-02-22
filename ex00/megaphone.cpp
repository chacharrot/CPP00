#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				std::cout << static_cast<char>(std::toupper(argv[i][j]));
				j++;
			}
			if (i + 1 < argc)
				std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
}