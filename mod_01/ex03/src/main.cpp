/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:00:50 by bgales            #+#    #+#             */
/*   Updated: 2023/05/19 16:40:02 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <unistd.h>

int main ()
{
	Weapon club = Weapon("crude spiked club");
	std::string name_hA = "Bob";
	std::string name_hB = "Jim";

	// std::cout << BOLDRED << "\nFirst we create a"
	// " weapon and set its type to " << BOLDBLACK <<
	// club.getType() << BOLDRED << "." << std::endl;
	// sleep(2);
	// std::cout << BOLDRED << "\nThen, we create a"
	// " HumanA named " << BOLDBLACK << name_hA << BOLDRED
	// << std::endl;
	// sleep(2);
	// std::cout << "In order to create " << BOLDBLACK << name_hA
	// << BOLDRED << " we must specify a name AND a weapon."
	// << std::endl;
	// sleep(2);
	// std::cout << "For the weapon, we'll use the "
	// << BOLDBLACK << club.getType() << BOLDRED <<
	// " created previously." << BOLDRED << std::endl;
	// sleep(4);

	HumanA bob(name_hA, club);

	// std::cout << "\nNow that " << BOLDBLACK << name_hA << BOLDRED <<
	// " is created, lets make him attack :\n" << RESET << std::endl;
	// sleep (2);

	bob.attack();

	// sleep(2);
	// std::cout << BOLDBLACK << "\n" + name_hA <<  BOLDRED
	// << " just attacked with the " << BOLDBLACK
	// << club.getType() << BOLDRED;

	club.setType("little hands");

	// std::cout << ", let's change the weapon type now. \n"
	// << std::endl;
	// sleep(3);
	// std::cout << "Since " << BOLDBLACK << name_hA << BOLDRED
	// << "'s weapon is a reference (an alias)"
	// " of the external weapon variable we've created early on,"
	// "\nwe can modify it from here, even thought it's a HumanA private variable,"
	// "\nthanks to Weapon's class function \"weapon.setType()\".\n" << std::endl;
	// sleep(10);
	// std::cout << "Enough talking, let's make "
	// << BOLDBLACK << name_hA << BOLDRED << " attack again. \n"
	// << RESET << std::endl;
	// sleep(2);

	bob.attack();

	// sleep(2);
	// std::cout << BOLDRED << "\nNow we'll stop harassing that poor "
	// << BOLDBLACK << name_hA << BOLDRED << std::endl;
	// std::cout << "\nLets make another type of human, called HumanB. \n"
	// << std::endl;
	// sleep (4);
	// std::cout << "Unlike HumanA, HumanB does not need"
	// " to take a weapon as a parameter in order to be created."
	// "\nIt only takes a name.\n" << std::endl;
	// sleep(5);

	Weapon Bclub = Weapon("little carrot");
	HumanB jim(name_hB);
	jim.setWeapon(Bclub);

	// std::cout << "We'll call this humanB " << BOLDBLACK
	// << name_hB << BOLDRED << ".\nHe is special because he has enough place in his "
	// "pocket to store a weapon.\nBut unlike " << BOLDBLACK << name_hA << BOLDRED <<
	// " he's not forced to have a weapon even though there's space for it.\n"
	// "Thats thanks to the pointer. Without it, he couldnt be created"
	// "without a defined weapon.\n" << std::endl;
	// sleep (10);
	// std::cout << "Now we just created another Weapon, this new deadly weapon is a "
	// << BOLDBLACK << Bclub.getType() << BOLDRED <<  ".\nFrom here, we'll make "
	// << BOLDBLACK << name_hB << BOLDRED << "'s pocket point to the newly created weapon\n"
	// "thanks to the HumanB member function \"setWeapon()\".\n" << std::endl;
	// sleep (8);
	// std::cout << "Let's attack.\n" << RESET << std::endl;

	jim.attack();
	Bclub.setType("huge freakin bat");

	// sleep(3);
	// std::cout << BOLDRED << "\nAs with humanA, we now have"
	// " to change the external weapon variable type with\n\"weapon.setType()\""
	// " to makes HumanB's change aswell.\n" << std::endl;
	// sleep(3);
	// std::cout << "Let's attack one last time.\n" << RESET << std::endl;
	// sleep(2);

	jim.attack();
}