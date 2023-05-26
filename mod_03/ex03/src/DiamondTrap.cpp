/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:17:43 by bgales            #+#    #+#             */
/*   Updated: 2023/05/25 15:37:01 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/**************************CONSTRUCTORS/DESTRUCTORS*****************************/

DiamondTrap::DiamondTrap():ClapTrap(), ScavTrap(), FragTrap(){
	std::cout << "Default DiamondTrap constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name){
	_name = name;
	ScavTrap::setInfo(ScavTrap::getInfo("energy"), FragTrap::getInfo("health"), FragTrap::getInfo("attack"));
	std::cout << "DiamondTrap default constructor created "
		<< BR << _name << R << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << BR << _name << R <<
		" destructor called" << std::endl;
}


DiamondTrap::DiamondTrap(const DiamondTrap &other):ScavTrap(other){
	std::cout << "DiamondTrap copy constructor called" << std::endl;

}

DiamondTrap& DiamondTrap::operator =(const DiamondTrap& other){

	ScavTrap::operator=(other);
	std::cout << "DiamondTrap assignment operator called for " << BR
			<< _name << R << "." << std::endl;
	return (*this);
}
/******************************MEMBER FUNCTIONS*******************************/

void	DiamondTrap::attack(const std::string &target){
	ScavTrap::attack(target);
}


void	DiamondTrap::guardGate(){
	ScavTrap::guardGate();
}

void	DiamondTrap::highFivesGuys(){
	FragTrap::highFivesGuys();
}

void	DiamondTrap::whoAmI(){
	std::cout << BOLDMAGENTA << "DiamondTrap " + _name + ":"<< R
		<< GREEN << " My name is " << BR << _name << R << GREEN
		<< " and my subname is " << BR << getName() << R << GREEN
		<< "!" << R << std::endl;
}
