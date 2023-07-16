/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:36:04 by bgales            #+#    #+#             */
/*   Updated: 2023/07/10 13:39:30 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << BR << "Brain" << R << " default constructor called." << std::endl;
}

Brain::~Brain(){
	std::cout << BR << "Brain" << R << " destructor called." << std::endl;
}

Brain::Brain(const Brain &other){
	for (int i = 0; !ideas[i].empty(); i++)
			ideas[i] = other.ideas[i];
	std::cout << BR << "Brain" << R << " copy constructor called." << std::endl;
}

/******************************OVERLOAD OPERATORS*******************************/

Brain& Brain::operator=(const Brain &other){
	std::cout << BR << "Brain" << R << " assignment operator called" << std::endl;
	if (this != &other)
	{
		std::cout << "Deep copying brain ideas...." << std::endl;
		for (int i = 0; !ideas[i].empty(); i++)
			ideas[i] = other.ideas[i];
	}
	return (*this);
}
