/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 12:08:25 by bgales            #+#    #+#             */
/*   Updated: 2023/05/29 10:14:13 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/**************************CONSTRUCTORS/DESTRUCTORS*****************************/

Dog::Dog():Animal("Dog"){
	std::cout << BR << "Dog" << R << " default constructor called." << std::endl;
}
Dog::~Dog(){
	std::cout << BR << "Dog" << R << " destructor called." << std::endl;
}

Dog::Dog(const Dog &other):Animal(other){
	std::cout << BR << "Dog" << R << " copy constructor called." << std::endl;
}

/******************************OVERLOAD OPERATORS*******************************/

Dog& Dog::operator=(const Dog &other){
	if (this != &other)
		Animal::operator=(other);
	std::cout << BR << "Dog" << R << " assignment operator called" << std::endl;
	return (*this);
}

/****************************MEMBERS FUNCTIONS**********************************/

void Dog::makeSound() const{
	std::cout << "Woof woof" << std::endl;
}