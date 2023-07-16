/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:20:44 by bgales            #+#    #+#             */
/*   Updated: 2023/07/08 12:42:54 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template<typename T>
void	print(T const &elem)
{
	std::cout << elem << std::endl;
	return;
}

void	toUpper(char &c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;

}

void	nextLetter(char &c)
{
	if ((c >= 'a' && c < 'z') || (c >= 'A' && c < 'Z'))
		c+=1;
	if (c == 'z' || c == 'Z')
		c -=25;

}

int power(int &n)
{
	n *= n;
	return (n);
}

int main(void)
{
	int a = 0;

	char str[7] = "abcdef";
	int i[3] = {1, 2, 3};
	std::cout << BOLDRED << "-----iter toUpper() : " << RESET << std::endl;
	iter(str, 6, &toUpper);
	std::cout << str << "\n" << std::endl;
	std::cout << BOLDRED << "-----iter nextLetter() : " << RESET << std::endl;
	iter(str, 6, &nextLetter);
	std::cout << str << "\n" << std::endl;

	std::cout << BOLDRED << "-----iter power() : " << RESET << std::endl;
	iter(i, 3, &power);
	iter(i, 3, print);
	std::cout <<  std::endl;
	return (0);
}