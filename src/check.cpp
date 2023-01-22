/*
** File description:
** check
*/

#include "../include/main.hpp"

int check(std::string  got, std::string expect)
{
	std::string line;
	std::string empty;
	int n_line = 1;

	for (int i = 0; i < got.length(); i ++)
	{
		if (got[i] == '\n') {
			line = empty;
			n_line += 1;
		} else
			line += got[i];
		if (got[i] != expect[i]) {
			std::cout << "got [ " << got[i] << " ] but expect [ " << expect[i] << " ] on line [ " << n_line << " ]";
			return(1);
		}
	}
	std::cout << "All good you can push\n";
	return (0);
}