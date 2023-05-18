/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:00:50 by bgales            #+#    #+#             */
/*   Updated: 2023/05/18 14:09:37 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

int main ()
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("little hands");
	bob.attack();

	Weapon Bclub = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(Bclub);
	jim.attack();
	Bclub.setType("huge freakin bat");
	jim.attack();
}