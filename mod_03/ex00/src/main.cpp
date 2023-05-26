/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:05:46 by bgales            #+#    #+#             */
/*   Updated: 2023/05/25 14:53:20 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Karyus("Karyus");
	ClapTrap Rodrigo("Rodrigo");
	ClapTrap Karyus_cpy(Karyus);
	ClapTrap Rodrigo_assign;
/**********************Test case : No energy/Health left***********************/

	Karyus.attack("Rodrigo");
	Karyus.takeDamage(10);
	Karyus.attack("Rodrigo");
	Karyus.attack("Rodrigo");
	for (int i = 0; i <= 11; i++)
		Rodrigo.attack("but miss target");
	Rodrigo_assign = Rodrigo;

/****************************Test case : Regen**************************/

	Karyus.beRepaired(1);
	Rodrigo_assign.beRepaired(1);

	ClapTrap Vinicius("Vinicius");

	std::cout << BR << Vinicius.getName() << R << " has " <<
		BR << Vinicius.getInfo("energy") << R << " energy points left." << std::endl;
	std::cout << BR << Vinicius.getName() << R << " has " <<
		BR << Vinicius.getInfo("health") << R << " health points left." << std::endl;

	for (int i = 0; i < 7; i++)
		Vinicius.beRepaired(1);

	std::cout << BR << Vinicius.getName() << R << " has " <<
		BR << Vinicius.getInfo("energy") << R << " energy points left." << std::endl;
	std::cout << BR << Vinicius.getName() << R << " has " <<
		BR << Vinicius.getInfo("health") << R << " health points left." << std::endl;

}
