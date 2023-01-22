/*
** File description:
** main headers
*/

#ifndef MAIN_HPP_
    #define MAIN_HPP_
        #include <sstream>
        #include <fstream>
        #include <iostream>
        #include <criterion/criterion.h>
        #include "main_program.hpp"

        std::string read_file(std::string file);
        int check(std::string  got, std::string expect);
#endif /* !MAIN_HPP_ */
