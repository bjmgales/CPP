/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:23:58 by bgales            #+#    #+#             */
/*   Updated: 2023/05/18 14:08:19 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& club)
:_name(name),_weapon(club)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their "
	<< (_weapon).getType() << std::endl;
}