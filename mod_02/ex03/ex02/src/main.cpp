/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:55:19 by bgales            #+#    #+#             */
/*   Updated: 2023/07/02 11:37:47 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <unistd.h>

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

int main(){

	Fixed const constA;
	Fixed const constB(Fixed(5.05f) * Fixed(2));
	Fixed a;
	Fixed b;

	/********************Subject Test*********************/

	std::cout << BOLDRED << "SUBJECT TESTS" << RESET << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << constB << std::endl;
	std::cout << Fixed::max( a, constB ) << std::endl;


	/***************** Min/Max tests ***************************/

	Fixed const constC(-10);
	a = Fixed(100);
	b = Fixed(200);

	std::cout << BOLDBLACK << "\n\n----------------------------------------\n" << RESET << std::endl;
	std::cout << BOLDBLACK <<
		"VALUES FOR THE INCOMING TESTS:\n" << RESET
		<< "a = " << a << " b = " << b << "\nconstA = " << constA <<
		" constB = " << constB << " constC = " << constC << std::endl;
	std::cout << BOLDRED << "\nMIN/MAX TESTS" << RESET << std::endl;

	std::cout << BLUE << "max(constC, constB) = "
		<< RESET << Fixed::max(constC, constB) << std::endl;

	std::cout << BLUE << "min(constC, constB) = "
		<< RESET << Fixed::min(constC, constB) << std::endl;


	std::cout << BLUE << "max(a, b) = "
		<< RESET << Fixed::max(a, b) << std::endl;

	std::cout << BLUE << "min(a, b) = "
		<< RESET << Fixed::min(a, b) << std::endl;

	/***************** Pre/Post-increment tests ***************************/

	std::cout << BOLDRED << "\n\nPRE/POST INCREMENT TESTS" << RESET << std::endl;


	std::cout << BLUE << "Post increment (a++):"
		<< RESET << a++ << BLUE << "\nnew value : "
		<< RESET << a << "\n-------------------" << std::endl;
	std::cout << BLUE << "Pre increment (++a) :" << RESET << a
		<< BLUE << "\nvalue :"<< RESET << ++a << std::endl;

	/***************** Pre/Post-decrement tests ***************************/

	std::cout << BOLDRED << "\n\nPRE/POST DECREMENT TESTS" << RESET << std::endl;

	std::cout << BLUE << "Post decrement (a--):"
		<< RESET << a-- << BLUE << "\nnew value : "
		<< RESET << a << "\n-------------------" << std::endl;

	std::cout << BLUE << "Pre decrement (--a):"
		<< RESET << a << BLUE << "\nnew value : "
		<< RESET << --a << std::endl;

	/***************** Arithmetic Operators tests ***************************/

	std::cout << BOLDRED << "\n\nARITHMETIC OPERATORS TESTS" << RESET << std::endl;

	std::cout << BOLDBLACK << "-----------------------" << RESET << std::endl;

	std::cout << RED << "Sum" << BLUE << " : b(" << b << ") + a(" << a<< ") = "
		<< RESET << b + a << std::endl;

	std::cout << BOLDBLACK << "-----------------------" << RESET << std::endl;

	std::cout << RED << "Substraction" << BLUE << " : b(" << b << ") - a(" << a<< ") = "
		<< RESET << b - a << std::endl;

	std::cout << BOLDBLACK << "-----------------------" << RESET << std::endl;

	std::cout << RED << "Multiplication" << BLUE << " : b(" << b << ") * a(" << a<< ") = "
		<< RESET << b * a << std::endl;

	std::cout << BOLDBLACK << "-----------------------" << RESET << std::endl;

	std::cout << RED << "Division" << BLUE << " : b(" << b << ") / a(" << a<< ") = "
		<< RESET << b / a << std::endl;

	std::cout << BOLDBLACK << "-----------------------" << RESET << std::endl;

	std::cout << BLUE << "Mixed up : (b(" << b << ") + a(" << a<< ")) * (b(" << b
		<< ") - a(" << a<< ")) / 100 + 1.5 = "
		<< RESET << (b + a) * (b - a) / Fixed(100) + Fixed(1.5f) << std::endl;
}
