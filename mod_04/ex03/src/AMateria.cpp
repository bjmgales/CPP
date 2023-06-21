/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:29:09 by bgales            #+#    #+#             */
/*   Updated: 2023/05/31 14:47:12 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/**************************CONSTRUCTORS/DESTRUCTORS*****************************/

AMateria::AMateria(){
}

AMateria::AMateria(std::string const &type):_type(type){
}

AMateria::~AMateria(){
}

AMateria::AMateria(const AMateria &other){
	_type = other._type;
}

/******************************OVERLOAD OPERATORS*******************************/

AMateria& AMateria::operator=(const AMateria &other){
	if (this != &other)
		_type = other._type;
	return (*this);
}

/****************************SET/GET FUNCTIONS**********************************/

std::string const& AMateria::getType() const{
	
	return _type;
}

/****************************MEMBERS FUNCTIONS**********************************/

void	AMateria::use(ICharacter &target){
	std::cout << "* shoots an Character bolt at "
		<< target.getName() << " *" << std::endl;
}
