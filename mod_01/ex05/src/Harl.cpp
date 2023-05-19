/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:23:52 by bgales            #+#    #+#             */
/*   Updated: 2023/05/19 12:04:11 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

}
Harl::~Harl()
{

}

void	Harl::debug(){
	std::cout << "I like trains.\n" << std::endl;
}

void	Harl::info(){
	std::cout << "I like trains with plugs to charge my phone battery.\n" << std::endl;
}

void	Harl::warning(){
	std::cout << "It's an absolute shame that\
 I must pay to get a plug to charge my phone battery.\n" << std::endl;
}

void	Harl::error(){
	std::cout << "I'm gonna derail this train\
 if my phone battery is not fully charged in three minutes.\n" << std::endl;
}

void	Harl::complain(std::string level){

	const char *levels[] = {"DEBUG", "INFO", "WARNING", "ERROR", NULL};
	functptr[0] = &Harl::debug;
	functptr[1] = &Harl::info;
	functptr[2] = &Harl::warning;
	functptr[3] = &Harl::error;
	for (int i = 0; levels[i]; i++)
		if (levels[i] == level)
			(this->*functptr[i])();

}
