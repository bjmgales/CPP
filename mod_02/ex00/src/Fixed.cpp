/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:55:21 by bgales            #+#    #+#             */
/*   Updated: 2023/05/21 15:04:22 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/**************************CONSTRUCTORS/DESTRUCTORS*****************************/

Fixed::Fixed():_nbr(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &a):_nbr(a.getRawBits()){
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& a){
	std::cout << "Copy assignement operator called" << std::endl;
	_nbr = a.getRawBits();
	return (*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

/****************************MEMBERS FUNCTIONS**********************************/

int Fixed::getRawBits() const{
	std::cout << "getRawBits() member function called." << std::endl;
	return (_nbr);
}

void Fixed::setRawBits(int const raw){
	_nbr = raw;
}