/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 13:14:56 by bgales            #+#    #+#             */
/*   Updated: 2023/07/08 11:36:22 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "template.hpp"
#include <iostream>



template<typename Swap>
void swap(Swap &a, Swap &b)
{
	Swap tmp = a;

	a = b;
	b = tmp;
	return;
}

template <typename Max>
Max max(Max a, Max b)
{
	if (a > b || a == b)
		return (a);
	else if (a < b)
		return (b);
	return (0);
}

template <typename Min>
Min min(Min a, Min b)
{
	if (a > b || a == b)
		return (b);
	else if (a < b)
		return (a);
	return (0);
}

int main(void)
{
	/****************************42 TEST****************************/

	std::cout << BOLDRED << "\n ------SCHOOL TEST-------" << RESET << std::endl;

	int x = 2;
	int y = 3;
	::swap( x, y );
	std::cout << "x = " << x << ", y = " << y << std::endl;
	std::cout << "min( x, y ) = " << ::min( x, y ) << std::endl;
	std::cout << "max( x, y ) = " << ::max( x, y ) << std::endl;
	std::string s1 = "chaine1";
	std::string s2 = "chaine2";
	::swap(s1, s2);
	std::cout << "s1 = " << s1 << ", s2 = " << s2 << std::endl;
	std::cout << "min( s1, s2 ) = " << ::min( s1, s2 ) << std::endl;
	std::cout << "max( s1, s2 ) = " << ::max( s1, s2 ) << std::endl;




	int a = -100;
	int b = 42;
	char c = 'u';
	char d = 'z';

// /****************************SWAP TEST****************************/

	std::cout << BOLDRED << "\n\n\n----BEFORE SWAP FUNCTION------" << RESET << std::endl;
	std::cout << "int a = " << a << std::endl;
	std::cout << "int b = " << b << std::endl;
	std::cout << "char c = " << c << std::endl;
	std::cout << "char d = " << d << std::endl;

	std::cout << BOLDRED << "AFTER SWAP FUNCTION" << RESET << std::endl;
	::swap(a, b);
	::swap(c, d);

	std::cout << "int a = " << a << std::endl;
	std::cout << "int b = " << b << std::endl;
	std::cout << "char c = " << c << std::endl;
	std::cout << "char d = " << d << std::endl;

/****************************MIN TEST****************************/

	std::cout << BOLDRED << "\n\n\n---- VAR VALUES BEFORE MIN/MAX FUNCTION------" << RESET << std::endl;
	std::cout << "int a = " << a << std::endl;
	std::cout << "int b = " << b << std::endl;
	std::cout << "char c = " << c << std::endl;
	std::cout << "char d = " << d << std::endl;

	std::cout << BOLDRED << "MIN/MAX FUNCTION OUTPUTS" << RESET << std::endl;

	std::cout << "min(a,b) = " << ::min(a,b) << std::endl;
	std::cout << "max(a,b) = " << ::max(a,b) << std::endl;
	std::cout << "min(c,d) = " << ::min(c,d) << std::endl;
	std::cout << "max(c,d) = " << ::max(c,d) << std::endl;
}