/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 12:08:37 by bgales            #+#    #+#             */
/*   Updated: 2023/05/28 13:36:59 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/**************************CONSTRUCTORS/DESTRUCTORS*****************************/

WrongCat::WrongCat():WrongAnimal("WrongCat"){
	std::cout << BR << "WrongCat" << R << " default constructor called." << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << BR << "WrongCat" << R << " destructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other):WrongAnimal(other){
	std::cout << BR << "WrongCat" << R << " copy constructor called." << std::endl;
}

/******************************OVERLOAD OPERATORS*******************************/

WrongCat& WrongCat::operator=(const WrongCat &other){
	if (this != &other)
		WrongAnimal::operator=(other);
	std::cout << BR << "WrongCat" << R << " assignment operator called" << std::endl;
	return (*this);
}

/****************************MEMBERS FUNCTIONS**********************************/

void WrongCat::makeSound() const{
	std::cout << "Meow Meow its the WrongCat" << std::endl;
}