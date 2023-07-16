/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:32:30 by bgales            #+#    #+#             */
/*   Updated: 2023/06/29 15:53:27 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int main()
{
	Zombie *newZ;
	std::string	name = "Onizuka";
	std::string name2 = "Alberto";

	// std::cout << BOLDRED << "\n" << name << " will be"
	// " allocated on the heap with newZombie ft: \n" << RESET
	// << std::endl;
	// sleep (2);

	newZ = newZombie(name);

	// sleep (2);
	// std::cout << BOLDRED << "\n" << name2 << " will be"
	// " allocated on the stack with randomChump ft: \n" << RESET
	// << std::endl;
	// sleep(2);

	randomChump(name2);

	// sleep(2);
	// std::cout << BOLDRED << "\n" << name2 << " is already dead cause he was on the stack."
	// " As soon as he left randomChump scope, he's no longer existing."
	// << std::endl;
	// sleep(3);
	// std::cout << "\n\nHowever...\n" << std::endl;
	// sleep(2);
	// std::cout << name << " should still be alive now"
 	// " cause we havent killed him using \"delete\" \n" << RESET << std::endl;
	// sleep(3);

	delete newZ;

	// sleep(2);
	// std::cout << BOLDRED << "\n" << name << " is now dead, cause we explicitely erased him from memory using delete." << std::endl;
	return (0);
}