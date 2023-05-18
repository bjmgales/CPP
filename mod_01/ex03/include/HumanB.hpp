/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:01:48 by bgales            #+#    #+#             */
/*   Updated: 2023/05/18 14:07:32 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"
#include <iostream>


class HumanB
{
private:
	Weapon* _weapon; // will be a pointer only since i dont assign it in the constructor. Pointer allows me to assign it later on.
	std::string _name;
public:
	HumanB(std::string name);
	~HumanB();
	void attack();
	void setWeapon(Weapon& club);
	void del();
};

