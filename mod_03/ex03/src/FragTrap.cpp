/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:17:43 by bgales            #+#    #+#             */
/*   Updated: 2023/05/25 15:37:01 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/**************************CONSTRUCTORS/DESTRUCTORS*****************************/

FragTrap::FragTrap():ClapTrap(){
	std::cout << "Default FragTrap constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name){
	setInfo(100, 100, 30);
	std::cout << "FragTrap default constructor created "
		<< BR << getName() << R << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << BR << getName() << R <<
		" destructor called" << std::endl;
}


FragTrap::FragTrap(const FragTrap &other):ClapTrap(other){
	std::cout << "FragTrap copy constructor called" << std::endl;

}

FragTrap& FragTrap:: operator =(const FragTrap& other){

	ClapTrap::operator=(other);
	std::cout << "FragTrap assignment operator called for " << BR
			<< getName() << R << "." << std::endl;
	return (*this);
}
/******************************MEMBER FUNCTIONS*******************************/


void FragTrap::attack(const std::string &target){
	if (energyCheck() && healthCheck())
	{
		std::cout << "FragTrap " << BR << getName() << R <<
			" attacks " << BR << target << R << ", causing " << BR
			<< getInfo("attack") << R << " points of damage!" << std::endl;
		setInfo((getInfo("energy") - 1), getInfo("health"), getInfo("attack"));
	}
}

void	FragTrap::highFivesGuys(){
	std::cout << BOLDMAGENTA << "FragTrap " + getName() + ": " << R << GREEN
		<< "Can we do a high five guys ? Please ?" << R << std::endl;
}
