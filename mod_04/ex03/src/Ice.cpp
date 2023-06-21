/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:00:10 by bgales            #+#    #+#             */
/*   Updated: 2023/05/31 14:13:58 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/**************************CONSTRUCTORS/DESTRUCTORS*****************************/

Ice::Ice():AMateria("ice"){
}


Ice::Ice (const Ice &other):AMateria(other){
}

Ice::~Ice(){
}

/******************************OVERLOAD OPERATORS*******************************/

Ice& Ice::operator=(const Ice &other){
	AMateria::operator=(other);
	return (*this);
}

/****************************MEMBERS FUNCTIONS**********************************/

void Ice::use(ICharacter &target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const{
	return (new Ice(*this));
};