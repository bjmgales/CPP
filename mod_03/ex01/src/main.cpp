/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:05:46 by bgales            #+#    #+#             */
/*   Updated: 2023/05/26 13:06:24 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{

	ScavTrap Boss("Boss");
	ScavTrap Boss_cpy;
	ClapTrap soldier("soldier");

	Boss.guardGate();
	Boss.attack("soldier");
	soldier.takeDamage(Boss.getInfo("attack"));
	soldier.displayInfo();
	Boss.displayInfo();
	Boss_cpy = Boss;

/**********************Test case : No energy/Health left***********************/

/****************************Test case : Regen**************************/

}
