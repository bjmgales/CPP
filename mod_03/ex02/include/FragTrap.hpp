/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:17:21 by bgales            #+#    #+#             */
/*   Updated: 2023/05/25 15:38:42 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap&);
		FragTrap& operator = (const FragTrap &other);

		~FragTrap();

		void	attack(const std::string& target);

		void highFivesGuys();
};