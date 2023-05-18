/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:23:52 by bgales            #+#    #+#             */
/*   Updated: 2023/05/18 18:44:50 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

}
Harl::~Harl()
{

}

void	debug(){
	std::cout << "I like trains." << std::endl;
}

void	info(){
	std::cout << "I like trains with plug to charge my phone."
}

void	warning(){
	std::cout << "It's an absolute shame that\
 I must pay to get a plug to charge my phone" << std::endl;
}

void	error(){
	std::cout << "I'm gonna derail this train\
 if my phone is not fully charged in three minutes" << std::endl;
}

void	complain(std::string level){

	const char** levels= {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; levels[i]; i++)
		if (levels[i] == level)
			
}
