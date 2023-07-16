/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:55:19 by bgales            #+#    #+#             */
/*   Updated: 2023/07/02 11:17:06 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
/**********************************BASIC TEST**********************************/

	// Fixed a;
	// Fixed b(a);
	// Fixed c;

	// c = b;
	// std::cout << a.getRawBits() << std::endl;
	// std::cout << b.getRawBits() << std::endl;
	// std::cout << c.getRawBits() << std::endl;

/**********************COPY CONSTRUCTOR REASSIGNMENT TEST**********************/

	// Fixed a;
	// a.setRawBits(42);
	// Fixed b(a);
	// Fixed c;

	// c = b;
	// b.setRawBits(100); // since c is a copy of b at a given time,
								// its values isnt affected by that change.
	// std::cout << BOLDRED << "\n\nFixed  A..." << RESET << a.getRawBits() << std::endl;
	// std::cout << BOLDRED << "Fixed B... " << RESET << b.getRawBits() << std::endl;
	// std::cout << BOLDRED << "Fixed C... " << RESET << c.getRawBits() << std::endl;

/********************DEFAULT CONSTRUCTOR REASSIGNMENT TEST*********************/


	Fixed a (1234.4321f) ;
	Fixed const b( 100 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	std::cout << "a is " << a << std::endl;
	std::cout << "a is " << a.toInt() << " as an integer" << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "b is " << b.toInt() << " as an integer" << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "c is " << c.toInt() << " as an integer" << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "d is " << d.toInt() << " as an integer" << std::endl;
	return 0;
}