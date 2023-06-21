/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:53:04 by bgales            #+#    #+#             */
/*   Updated: 2023/05/31 14:13:51 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/**************************CONSTRUCTORS/DESTRUCTORS*****************************/

Cure::Cure():AMateria("cure"){
}


Cure::Cure (const Cure &other):AMateria(other){
}

Cure::~Cure(){
}

/******************************OVERLOAD OPERATORS*******************************/

Cure& Cure::operator=(const Cure &other){
	AMateria::operator=(other);
	return (*this);
}

/****************************MEMBERS FUNCTIONS**********************************/

void Cure::use(ICharacter &target){
	std::cout << "* heals " << target.getName() << " wounds *"<< std::endl;
}

AMateria* Cure::clone() const{
	return (new Cure(*this));
};