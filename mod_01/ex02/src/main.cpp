/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:55:38 by bgales            #+#    #+#             */
/*   Updated: 2023/05/19 14:45:22 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

int main()
{
	std::string string = "HI THIS IS BRAIN !";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << BOLDRED << "\nVAR ADRESSES ARE :\n" << RESET <<
		"string    == " << &string << std::endl;
	std::cout <<"stringPTR == " << stringPTR << std::endl;
	std::cout << "stringREF == " << &stringREF << std::endl;

	sleep (5);

	std::cout << BOLDRED << "\nVAR VALUES ARE :\n" << RESET <<
		"string    value == " << string << std::endl;
	std::cout << "stringPTR value == " << *stringPTR << std::endl;
	std::cout << "stringREF value == " << stringREF << std::endl;

}