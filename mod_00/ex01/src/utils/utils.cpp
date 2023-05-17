#include "Phonebook.hpp"

void	length_check(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) + ".";
	else
		std::cout << std::setw(10) << str;

	std::cout << "|";

	return;
}
