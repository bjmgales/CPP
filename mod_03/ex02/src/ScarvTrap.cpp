/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:17:43 by bgales            #+#    #+#             */
/*   Updated: 2023/05/25 15:37:01 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/**************************CONSTRUCTORS/DESTRUCTORS*****************************/

ScavTrap::ScavTrap():ClapTrap(){
	std::cout << "Default ScavTrap constructor created "
		<< BR << getName() << R <<  std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name){
	setInfo(50, 100, 20);
	std::cout << "ScavTrap default constructor created "
		<< BR << getName() << R << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "Scavtrap " << BR << getName() << R <<
		" destructor called" << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap &other):ClapTrap(other){
	std::cout << "Scavtrap copy constructor called" << std::endl;

}

ScavTrap& ScavTrap:: operator =(const ScavTrap& other){

	ClapTrap::operator=(other);
	std::cout << "ScavTrap assignment operator called for " << BR
			<< getName() << R << "." << std::endl;
	return (*this);
}
/******************************MEMBER FUNCTIONS*******************************/

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << BR << getName() << R << " entered Gate Keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target){
	if (energyCheck() && healthCheck())
	{
		std::cout << "ScavTrap " << BR << getName() << R <<
			" attacks " << BR << target << R << ", causing " << BR
			<< getInfo("attack") << R << " points of damage!" << std::endl;
		setInfo((getInfo("energy") - 1), getInfo("health"), getInfo("attack"));
	}
}
