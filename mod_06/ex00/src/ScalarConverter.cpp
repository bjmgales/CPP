/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:17:07 by bgales            #+#    #+#             */
/*   Updated: 2023/09/29 13:31:16 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip>
#include <limits.h>
#include <float.h>

void 	ScalarConverter::fromInt(std::string rep){
	errno = 0;
	try{
		long x = std::strtol(rep.c_str(), NULL, 10);
		if ((errno == ERANGE && (x >= INT32_MAX || x <= INT32_MIN)) || (errno != 0 && x == 0))
			throw std::runtime_error("Overflow or underflow detected!");
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
	catch (const std::exception &e){
		std::cout << e.what() << std::endl;

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
	float f = std::strtod(rep.c_str(), NULL);
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

void 	ScalarConverter::fromDouble(std::string rep){
	double d = std::strtod(rep.c_str(), NULL);
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

void	ScalarConverter::specialCases(std::string rep){
	std::string levels[8] = {"+inf", "inf", "+inff", "inff", "-inf", "-inff", "nan", "nanf"};
	for (int i = 0; i < 4;){
		if (levels[i] == rep){
			std::cout << "char: impossible \nint: impossible\nfloat: inff\ndouble: inf" << std::endl;
			return;
		}
		i++;
	}
	for (int i = 4; i < 6;){
		if (levels[i] == rep){
			std::cout << "char: impossible \nint: impossible\nfloat: -inff\ndouble: -inf" << std::endl;
			return;
		}
		i++;
	}
	std::cout << "char: impossible \nint: impossible\nfloat: nanf\ndouble: nan" << std::endl;


}
void	ScalarConverter::convert(std::string rep){
	const char levels[] = {'c', 'i', 'd', 'f', 's', '\0'};
	void	(*f_ptr[5])(std::string);
	if (rep.empty())
		return;
	char type = typeFinder(rep);
	f_ptr[0]=&ScalarConverter::fromChar;
	f_ptr[1]=&ScalarConverter::fromInt;
	f_ptr[2]=&ScalarConverter::fromDouble;
	f_ptr[3]=&ScalarConverter::fromFloat;
	f_ptr[4]=&ScalarConverter::specialCases;
	for (int i = 0; levels[i]; i++){
		if (levels[i] == type){
			f_ptr[i](rep);
			return;
		}
	}
}
