/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:32:30 by bgales            #+#    #+#             */
/*   Updated: 2023/05/19 14:39:03 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *newZ;
	int	N = 5;
	std::string name = "Johnny";

	// std::cout << BOLDRED << "\nNow creating a horde of " << BOLDBLACK << N <<
	// BOLDRED << " zombies. They will all be set with the name " << BOLDBLACK << name
	// << BOLDRED << ".\n" << RESET << std::endl;
	// sleep (3);

	newZ = zombieHorde(N, name);
	 for (int i = 0; i < N; i++)
		newZ[i].announce();

	// sleep(3);
	// std::cout << BOLDRED << "\n\nNow that we've created " << BOLDBLACK << N << " " + name
	// << BOLDRED << " we are going to delete them"
	// " all at once using \"delete[]\", which frees the"
	// " whole Zombie array. \n" << RESET<< std::endl;
	// sleep (3);

	delete[] newZ;
	return (0);
}