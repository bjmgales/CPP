/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:55:21 by bgales            #+#    #+#             */
/*   Updated: 2023/05/22 18:00:03 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "Fixed.hpp"

/**************************CONSTRUCTORS/DESTRUCTORS*****************************/

Fixed::Fixed():_nbr(0){
}

Fixed::Fixed(float a){
	_nbr = roundf(a * (1 << _fractBits));

}

Fixed::Fixed(Fixed const &a):_nbr(a.getRawBits()){
}

Fixed::Fixed(const int a){
	_nbr = (a << _fractBits);
}

Fixed::~Fixed(){
}
/****************************OVERLOADED OPERATORS FUNCTIONS**********************************/

Fixed& Fixed::operator=(const Fixed& a){
	_nbr = a.getRawBits();
	return (*this);
}

bool Fixed::operator>(Fixed const &right){
	if (_nbr > right._nbr)
		return (true);
	return (false);
}
bool Fixed::operator <(const Fixed&right){
	if (_nbr < right._nbr)
		return (true);
	return (false);
}

bool Fixed::operator >=(const Fixed&right){
	if (_nbr >= right._nbr)
		return (true);
	return (false);
}
bool Fixed::operator <=(const Fixed&right){
	if (_nbr <= right._nbr)
		return (true);
	return (false);
}
bool Fixed::operator !=(const Fixed&right){
	if (_nbr == right._nbr)
		return (false);
	return (true);
}
bool Fixed::operator ==(const Fixed&right){
	if (_nbr == right._nbr)
		return (true);
	return (false);
}

Fixed Fixed::operator +(const Fixed&right){
	Fixed ret;
	ret.setRawBits(right.getRawBits() + this->getRawBits());
	return (ret);
}

Fixed Fixed::operator -(const Fixed&right){
	Fixed ret;
	ret.setRawBits(this->getRawBits() - right.getRawBits());
	return(ret);
}

Fixed Fixed::operator *(const Fixed&right){
	Fixed ret;
	ret.setRawBits((right.getRawBits() * this->getRawBits()) >> _fractBits);
	return(ret);
}
Fixed Fixed::operator /(const Fixed&right){
	Fixed ret;
	ret.setRawBits((this->getRawBits() / right.getRawBits()) << _fractBits);
	return (ret);
}
Fixed& Fixed::operator ++(){
	_nbr++;
	return (*this);
}
Fixed Fixed::operator ++(int){
	Fixed tmp((float)_nbr / (float)(1 << _fractBits));
	_nbr++;
	return (tmp);
}
Fixed& Fixed::operator --(){
	_nbr--;
	return (*this);
}

Fixed Fixed::operator --(int){
	Fixed tmp((float)_nbr / (float)(1 << _fractBits));
	_nbr--;
	return (tmp);
}
std::ostream &operator<<(std::ostream &o, Fixed const &obj){
		o << obj.toFloat();
	return (o);
}


/****************************MEMBERS FUNCTIONS**********************************/

int Fixed::getRawBits() const{
	return (_nbr);
}

void Fixed::setRawBits(int const raw){
	_nbr = raw;
}

int Fixed::toInt() const{
	return (_nbr >> _fractBits);
}


float Fixed::toFloat() const{
	return ((float)_nbr / (float)(1 << _fractBits));
}

Fixed Fixed::min (const Fixed&a, const Fixed&b){
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

Fixed Fixed::max (const Fixed&a, const Fixed&b){
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed Fixed::min (Fixed&a, Fixed&b){
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

Fixed Fixed::max (Fixed&a, Fixed&b){
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}
