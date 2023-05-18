/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:58:45 by bgales            #+#    #+#             */
/*   Updated: 2023/05/18 14:08:03 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name):_name(name)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	std::cout << _name << " attack with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& club)
{
	(_weapon) = &club;
}