/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:42:57 by bgales            #+#    #+#             */
/*   Updated: 2023/05/17 15:47:19 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <unistd.h>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void	announce();
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);