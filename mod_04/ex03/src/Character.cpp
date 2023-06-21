/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:44:41 by bgales            #+#    #+#             */
/*   Updated: 2023/05/31 15:04:31 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/**************************CONSTRUCTORS/DESTRUCTORS*****************************/

Character::Character(){
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}
Character::Character(std::string name):_name(name){
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character (const Character &other){
		for (int i = 0; i < 4; i++){
			if (_inventory[i])
				_inventory[i] = NULL;
			if (other._inventory[i]->getType() == "cure")
				_inventory[i] = new Cure;
			else if (other._inventory[i]->getType() == "ice")
				_inventory[i] = new Ice;
			else
				_inventory[i] = NULL;
		}
		_name = other._name;
}

Character::~Character(){
}

/******************************OVERLOAD OPERATORS*******************************/

Character& Character::operator=(const Character &other){
	if (this != &other){
		for (int i = 0; i < 4; i++){
			_inventory[i] = other._inventory[i];
		}
	}
	return (*this);
}

/****************************MEMBERS FUNCTIONS**********************************/

void Character::use(int idx, ICharacter &target){
	if (idx < 0 || idx > 3)
		return;
	else if (_inventory[idx] != NULL){
		_inventory[idx]->use(target);
		_inventory[idx] = NULL;
	}
}

void Character::equip(AMateria* m){
	for (int i = 0; i < 4; i++){
		if (_inventory[i] == NULL){
			_inventory[i] = m;
			break;
		}
	}

	return;
}

void Character::unequip(int idx){
	if (idx < 0 || idx > 3)
		return;
	else if (_inventory[idx] != NULL)
		_inventory[idx] = NULL;
	return;
}


std::string const & Character::getName() const{
	return (_name);
}