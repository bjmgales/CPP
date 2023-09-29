/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:00:44 by bgales            #+#    #+#             */
/*   Updated: 2023/09/29 16:55:44 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.hpp"
#include <limits>
#include <stdint.h>




int countChar(char toCount, std::string str){
	int i = 0;

	for (int c = 0; str[c]; c++){
		if (str[c] == toCount)
			i++;
	}
	return (i);
}

int isNum(std::string rep){

	size_t pos;

	if (rep[rep.length() - 1] == 'f'){
		if (std::isdigit(rep[rep.length() - 2]) &&
				(pos = rep.find_first_not_of("-0123456789.f"))
				== std::string::npos && countChar('.', rep) == 1
				&& countChar('f', rep) == 1 && countChar('-', rep) <= 1){
					return ('f');
				}
	}
	else if ((pos = rep.find_first_not_of("-0123456789.")) != std::string::npos
		&& countChar('.', rep) <= 1 && countChar('-', rep) <= 1)
		return (0);
	else if((pos = rep.find(".")) != std::string::npos)
		return('d');
	else if ((pos = rep.find(".")) == std::string::npos)
		return ('i');
	return (0);
}

bool isChar(std::string rep){

	if (rep.length() != 1)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible"<< std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return (false);
	}
	else if (rep[0] > 32 && rep[0] < 126)
		return (true);
	return (false);

}

int typeFinder(std::string rep){
	std::string levels[8] = {"+inf", "-inf", "inf", "+inff", "inff", "-inff", "nan", "nanf"};
	for (int i = 0; !levels[i].empty();){
		if (rep == levels[i])
			return ('s');
		i++;
	}
	if (isNum(rep))
		return (isNum(rep));
	else if (isChar(rep) == true)
		return ('c');
	return (0);
}
