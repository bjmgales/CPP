/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 11:58:30 by bgales            #+#    #+#             */
/*   Updated: 2023/05/28 13:41:36 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/**************************CONSTRUCTORS/DESTRUCTORS*****************************/

WrongAnimal::WrongAnimal(){
	std::cout <<  BR << "Wrong Animal" << R << " empty constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type):_type(type){
	std::cout << BR << "WrongAnimal" << R << " default constructor called." << std::endl;
}
WrongAnimal::~WrongAnimal(){
	std::cout <<  BR << "Wrong Animal" << R << " destructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other){
	_type = other._type;
	std::cout <<  BR << "Wrong Animal" << R << " copy constructor called." << std::endl;
}

/******************************OVERLOAD OPERATORS*******************************/

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other){
	if (this != &other)
		_type = other._type;
	return (*this);
}

/****************************SET/GET FUNCTIONS**********************************/

std::string WrongAnimal::getType() const{
	return _type;
}

void		WrongAnimal::setType(std::string type){
	_type = type;
}
/****************************MEMBERS FUNCTIONS**********************************/

void		WrongAnimal::makeSound() const{
	std::cout << "Wrong sound goes BRRRR" << std::endl;
}