/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 12:08:37 by bgales            #+#    #+#             */
/*   Updated: 2023/07/10 12:32:40 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/**************************CONSTRUCTORS/DESTRUCTORS*****************************/

Cat::Cat():Animal("Cat"){
	std::cout << BR << "Cat" << R << " default constructor called." << std::endl;
}

Cat::~Cat(){
	std::cout << BR << "Cat" << R << " destructor called." << std::endl;
}

Cat::Cat(const Cat &other):Animal(other){
	std::cout << BR << "Cat" << R << " copy constructor called." << std::endl;
}

/******************************OVERLOAD OPERATORS*******************************/

Cat& Cat::operator=(const Cat &other){
	if (this != &other)
		Animal::operator=(other);
	std::cout << BR << "Cat" << R << " assignment operator called" << std::endl;
	return (*this);
}

/****************************MEMBERS FUNCTIONS**********************************/

void Cat::makeSound() const{
	std::cout << "Meow Meow" << std::endl;
}