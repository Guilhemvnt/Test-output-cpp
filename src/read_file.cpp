/*
** File description:
** read_file
*/

#include "../include/main.hpp"

std::string read_file(std::string file)
{
    if(!std::ifstream(file)) {
        std::cerr << "ERROR INVALIDE FILE: " + file + " : No such file or directory\n";
        return ("ERROR");
    }
    std::string file_content;
    std::getline(std::ifstream(file), file_content, '\0');
    return (file_content);
}
