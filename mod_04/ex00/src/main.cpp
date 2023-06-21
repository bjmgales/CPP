/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:11:09 by bgales            #+#    #+#             */
/*   Updated: 2023/05/29 09:38:09 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const WrongAnimal* weirdCat = new WrongCat();
	const Animal* cat = new Cat();
	std::cout << dog->getType() << ": ";
	dog->makeSound();
	std::cout << cat->getType() << ": ";
	cat->makeSound();
	meta->makeSound();
	weirdCat->makeSound();

	// const WrongCat CatWoman;
	// CatWoman.makeSound();
}