/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:11:09 by bgales            #+#    #+#             */
/*   Updated: 2023/07/10 13:22:02 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal *animals[10];

	for (int i = 0; i < 6; i++)
		animals[i] = new Cat();
	for (int i = 6; i < 11; i++)
		animals[i] = new Dog();

	for (int i = 0; i < 11; i++)
		delete(animals[i]);

	const Animal* j = new Dog();
	const Animal* i = new Cat();


	delete j;
	delete i;
}