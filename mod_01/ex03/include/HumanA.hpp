/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:01:48 by bgales            #+#    #+#             */
/*   Updated: 2023/05/19 16:34:42 by bgales           ###   ########.fr       */
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
						but more efficient to put ref here since I assign it\
						right from the start.
	std::string _name;
public:
	HumanA(std::string name, Weapon& club);
	~HumanA();
	void attack();
};

