/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 13:05:46 by bgales            #+#    #+#             */
/*   Updated: 2023/05/26 14:08:45 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{

	FragTrap bigBoss("bigBoss");
	FragTrap bigBoss_cpy;
	ClapTrap soldier("soldier");

	bigBoss.attack("soldier");
	soldier.takeDamage(bigBoss.getInfo("attack"));
	soldier.displayInfo();
	bigBoss.displayInfo();
	bigBoss_cpy = bigBoss;
	bigBoss.highFivesGuys();

/**********************Test case : No energy/Health left***********************/

/****************************Test case : Regen**************************/

}
