/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:32:30 by bgales            #+#    #+#             */
/*   Updated: 2023/05/17 16:12:56 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
int main()
{
	Zombie *newZ;

	newZ = newZombie("toto");

	//std::cout << "\n" << std::endl;sleep(2);

	randomChump("Alberto");

	//std::cout << "*toto should still be alive now\
 cause we havent freed him using \"delete\"*" << std::endl;\
	sleep(2);
	delete newZ;
}