/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:17:07 by bgales            #+#    #+#             */
/*   Updated: 2023/06/06 13:20:36 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip>
#include <limits.h>
#include <float.h>

void 	ScalarConverter::fromInt(std::string rep){
	try{
		int x = std::stoi(rep);
		if (x < 32 || x > 126)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(x) << "'" << std::endl;
		std::cout << "int: " << x << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1)
				<< static_cast<float>(x)  << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1)
				<< static_cast<double>(x) << std::endl;
	}
	catch (const std::out_of_range){
		        std::cout << "Error: int format input: out of range" << std::endl;

	}
}

void 	ScalarConverter::fromChar(std::string rep){
	char c = rep[0];
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1)
			<< static_cast<float>(c)  << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1)
			<< static_cast<double>(c) << std::endl;
}

void 	ScalarConverter::fromFloat(std::string rep){
	std::cout << "Hello From Float\n" << std::endl;
	try{
		float f = std::stof(rep);
		if (static_cast<int>(f) < 32 || static_cast<int>(f) > 126)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
		if (f > static_cast<float>(INT_MAX) || f < static_cast<float>(INT_MIN))
			std::cout << "int: Non displayable"<< std::endl;
		else
			std::cout << "int: " << static_cast<int>(f) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1)
				<< f  << "f" << std::endl;
		std::cout << "double: " << std::fixed <<
			static_cast<double>(f) << std::endl;
	}
	catch(const std::out_of_range){
		if (rep[0] != '-'){
			std::cout << "char: Not Displayable" << std::endl;
			std::cout << "int: impossible"<< std::endl;
			std::cout << "float: +inff" << std::endl;
			std::cout << "double: +inf" << std::endl;
		}
		else
		{
			std::cout << "char: Not Displayable" << std::endl;
			std::cout << "int: impossible"<< std::endl;
			std::cout << "float: -inff" << std::endl;
			std::cout << "double: -inf" << std::endl;
		}
	}
}

void 	ScalarConverter::fromDouble(std::string rep){
	std::cout << "Hello From Double" << std::endl;
	try{
		double d = std::stod(rep);
		if (static_cast<int>(d) < 32 || static_cast<int>(d) > 126)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
		if (d > static_cast<double>(INT_MAX) || d < static_cast<double>(INT_MIN))
			std::cout << "int: Non displayable"<< std::endl;
		else
			std::cout << "int: " << static_cast<int>(d) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1)
				<< 	static_cast<float>(d)  << "f" << std::endl;
		std::cout << "double: " << std::fixed <<
			(d) << std::endl;
	}
	catch(const std::out_of_range){
		if (rep[0] != '-'){
			std::cout << "char: Not Displayable" << std::endl;
			std::cout << "int: impossible"<< std::endl;
			std::cout << "float: +inff" << std::endl;
			std::cout << "double: +inf" << std::endl;
		}
		else
		{
			std::cout << "char: Not Displayable" << std::endl;
			std::cout << "int: impossible"<< std::endl;
			std::cout << "float: -inff" << std::endl;
			std::cout << "double: -inf" << std::endl;
		}
	}
}

void	ScalarConverter::convert(std::string rep){

	const char levels[] = {'c', 'i', 'd', 'f', '\0'};
	void	(*f_ptr[4])(std::string);
	if (rep.empty())
		return;
	char type = typeFinder(rep);
	f_ptr[0]=&ScalarConverter::fromChar;
	f_ptr[1]=&ScalarConverter::fromInt;
	f_ptr[2]=&ScalarConverter::fromDouble;
	f_ptr[3]=&ScalarConverter::fromFloat;

	for (int i = 0; levels[i]; i++){
		if (levels[i] == type){
			f_ptr[i](rep);
			return;
		}
	}
		// std::cout << "char: impossible" << std::endl;
		// std::cout << "int: impossible"<< std::endl;
		// std::cout << "float: nanf" << std::endl;
		// std::cout << "double: nan" << std::endl;


}