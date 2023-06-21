/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 11:58:30 by bgales            #+#    #+#             */
/*   Updated: 2023/05/31 15:55:41 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/**************************CONSTRUCTORS/DESTRUCTORS*****************************/

Animal::Animal(){
	std::cout << BR << "Animal" << R << " empty constructor called." << std::endl;
}

Animal::Animal(std::string type):_type(type){
	std::cout << BR << "Animal" << R << " default constructor called." << std::endl;
}
Animal::~Animal(){
	std::cout << BR << "Animal" << R << " destructor called." << std::endl;
}

Animal::Animal(const Animal &other){
	_type = other._type;
	std::cout << "Animal copy constructor called." << std::endl;
}

/******************************OVERLOAD OPERATORS*******************************/

Animal& Animal::operator=(const Animal &other){
	if (this != &other)
		_type = other._type;
	return (*this);
}

/****************************SET/GET FUNCTIONS**********************************/

std::string Animal::getType() const{
	return _type;
}

void		Animal::setType(std::string type){
	_type = type;
}
/****************************MEMBERS FUNCTIONS**********************************/

void		Animal::makeSound() const{
	std::cout << "Animal sound goes BRRRR" << std::endl;
}