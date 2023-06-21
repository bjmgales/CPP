/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 15:09:52 by bgales            #+#    #+#             */
/*   Updated: 2023/06/05 15:35:21 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

void leak_test(){

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(NULL);

	Character Bernard("Bernard");

	ICharacter *Gerrard = new Character("Gerrard");

	// Materia Ice cannot be created because nothing has been learnt before
	std::cout << "My name is " << Gerrard->getName() << std::endl;
	Bernard.equip(src->createMateria("ice"));

	src->learnMateria(new Ice());
	Bernard.equip(src->createMateria("ice"));

	Bernard.use(0, *Gerrard);

	// There's nothing at index 1. Therefore the following line will not do anything
	Bernard.unequip(1);
	Bernard.unequip(0);
	// Materia Ice at index 0 has been unequiped and is now unavailable
	Bernard.use(0, *Gerrard);
	delete src;
	delete Gerrard;
}
int main()
{
	leak_test();
	system("leaks Interface");
	return 0;
}