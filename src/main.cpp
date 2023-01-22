/*
/*
** File description:
** main
*/

#include "../include/main.hpp"

int main(int ac, char **argv)
{
	if (ac == 1) {
		std::cout << "Please enter a file !!";
		return (84);
	}

    std::stringstream ss;
    std::streambuf *coutbuf = std::cout.rdbuf(); //buffer of cout
    std::cout.rdbuf(ss.rdbuf()); //redirect cout buff to ss
    main_program();
    std::cout.rdbuf(coutbuf); //put the original cout buff
    std::cout << "Output captured: \n" << ss.str() << std::endl;
	std::string expect = read_file(argv[1]);
	if (expect != "ERROR")
		check(ss.str(), expect);
}
