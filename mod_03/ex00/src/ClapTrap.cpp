/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:25:39 by bgales            #+#    #+#             */
/*   Updated: 2023/05/25 14:46:49 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/**************************CONSTRUCTORS/DESTRUCTORS*****************************/

ClapTrap::ClapTrap(){
}

ClapTrap::ClapTrap(std::string name):_name(name),_hitPoints(10),
	_energyPoints(10),_attackDamage(0){
		std::cout << "Default constructor created " << BR
			<< _name << R << "." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other){
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << "Copy constructor has copied " << BR
			<< _name << R << "." << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called for " << BR
			<< _name << R << "." << std::endl;
}
/******************************OVERLOAD OPERATORS*******************************/

ClapTrap& ClapTrap::operator=(const ClapTrap &other){
	if(this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << "Assignment operator called for " << BR
			<< _name << R << "." << std::endl;
	return (*this);
}

/****************************SET/GET FUNCTIONS**********************************/

unsigned int	ClapTrap::getInfo(std::string info)
{
	if (info == "health")
		return (_hitPoints);
	else if (info == "energy")
		return (_energyPoints);
	else if (info == "attack")
		return (_attackDamage);
	else
		return (-1);
}

std::string		ClapTrap::getName(){
	return (_name);
}
/****************************MEMBERS FUNCTIONS**********************************/
void ClapTrap::attack(const std::string& target){
	if (energyCheck() && healthCheck())
	{
		std::cout << "ClapTrap " << BR << _name << R <<
			" attacks " << BR << target << R << ", causing " << BR
			<< _attackDamage << R << " points of damage!" << std::endl;
		_energyPoints -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if (amount > _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (healthCheck() && energyCheck())
	{
		_hitPoints += amount;
		_energyPoints -= 1;
	}
}

bool ClapTrap::energyCheck(){
	if (_energyPoints > 0)
		return (true);
	std::cout << BR << _name << R << " has no energy left" << std::endl;
	return (false);
}

bool ClapTrap::healthCheck(){
	if (_hitPoints > 0)
		return (true);
	std::cout << BR << _name << R << " has no health left" << std::endl;
	return (false);
}