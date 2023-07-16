/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:55:21 by bgales            #+#    #+#             */
/*   Updated: 2023/07/02 11:20:55 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>

/**************************CONSTRUCTORS/DESTRUCTORS*****************************/

Fixed::Fixed():_nbr(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(float a){
	std::cout << "Float constructor called" << std::endl;
	_nbr = roundf(a * (1 << _fractBits));

}

Fixed::Fixed(Fixed const &a):_nbr(a.getRawBits()){
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int a){
	std::cout << "Int constructor called" << std::endl;
	_nbr = (a << _fractBits);
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

int Fixed::toInt() const{
	return (_nbr >> _fractBits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &obj){
		o << obj.toFloat();
	return (o);
}

float Fixed::toFloat() const{
	return ((float)_nbr / (float)(1 << _fractBits));
}