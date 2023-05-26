/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:17:21 by bgales            #+#    #+#             */
/*   Updated: 2023/05/25 15:38:42 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap&);
		using ClapTrap::operator=;
		ScavTrap& operator = (const ScavTrap &other);

		~ScavTrap();

		void	guardGate();
		void	attack(const std::string& target);
};