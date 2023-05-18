/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 14:31:19 by bgales            #+#    #+#             */
/*   Updated: 2023/05/17 15:53:32 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie livingDead(name);

	//std::cout << "*Alberto should die right after\
 this print cause he's on the stack*" << std::endl;\
 sleep(3);
}