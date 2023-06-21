/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:06:09 by bgales            #+#    #+#             */
/*   Updated: 2023/05/31 15:21:32 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/**************************CONSTRUCTORS/DESTRUCTORS*****************************/

MateriaSource::MateriaSource(){
	for (int i = 0; i < 4; i++)
		_learnedAM[i] = NULL;
}


MateriaSource::MateriaSource (const MateriaSource &other){
}

MateriaSource::~MateriaSource(){
	for (int i = 0; i < 4; i++){
		if (_learnedAM[i])
			delete(_learnedAM[i]);
	}
}

/******************************OVERLOAD OPERATORS*******************************/

MateriaSource& MateriaSource::operator=(const MateriaSource &other){
	return (*this);
}

/****************************MEMBERS FUNCTIONS**********************************/

void MateriaSource::learnMateria(AMateria *a){
	for (int i = 0; i < 4; i++){
		if (_learnedAM[i] == NULL){
			_learnedAM[i] = a;
			delete(a);
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const &type){
	AMateria *newAM;

	for (int i = 0; i < 4; i++){
		if (_learnedAM[i]){

			if (_learnedAM[i]->getType() == type && type == "cure")
				return (newAM = new Cure);
			else if (_learnedAM[i]->getType() == type && type == "ice")
				return (newAM = new Ice);
			else
				return (0);
		}
	}
	return (0);
}