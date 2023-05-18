/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:55:38 by bgales            #+#    #+#             */
/*   Updated: 2023/05/17 18:12:23 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main()
{
	std::string string = "HI THIS IS BRAIN !";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "VAR ADRESSES ARE :\n"
		"string == " << &string << std::endl;
	std::cout <<"stringPTR == " << stringPTR << std::endl;
	std::cout << "stringREF == " << &stringREF << std::endl;

	std::cout << "\nVAR VALUES ARE :\n"
		"string value == " << string << std::endl;
	std::cout << "stringPTR value == " << *stringPTR << std::endl;
	std::cout << "stringREF value == " << stringREF << std::endl;

}