/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:34:04 by bgales            #+#    #+#             */
/*   Updated: 2023/05/17 19:36:48 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type):_type(type){
}

Weapon::~Weapon()
{
}

std::string Weapon::getType()
{
	return (_type);
}

void Weapon::setType(std::string type)
{
	_type = type;
}