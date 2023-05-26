/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:05:46 by bgales            #+#    #+#             */
/*   Updated: 2023/05/26 17:06:28 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{

	DiamondTrap	bigBoss("bigBoss");
	ClapTrap soldier("soldier");

	bigBoss.ScavTrap::attack("soldier");
	soldier.takeDamage(bigBoss.ScavTrap::getInfo("attack"));
	soldier.displayInfo();
	bigBoss.ScavTrap::displayInfo();
	bigBoss.guardGate();
	bigBoss.highFivesGuys();
	bigBoss.whoAmI();
}
