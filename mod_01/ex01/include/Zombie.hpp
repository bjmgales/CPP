/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:42:57 by bgales            #+#    #+#             */
/*   Updated: 2023/05/17 16:52:46 by bgales           ###   ########.fr       */
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
	void	set_name(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);
