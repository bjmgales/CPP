/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:01:48 by bgales            #+#    #+#             */
/*   Updated: 2023/05/18 14:04:15 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

class Weapon;

class HumanA
{
private:
	Weapon& _weapon; // will be a reference to club. It could be a pointer,\
						but more efficient to put ref here since I assign it from the constructor, pointer will just mean to bother with memory managment.
	std::string _name;
public:
	HumanA(std::string name, Weapon& club);
	~HumanA();
	void attack();
};

