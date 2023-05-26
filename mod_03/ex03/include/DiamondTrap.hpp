/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:17:21 by bgales            #+#    #+#             */
/*   Updated: 2023/05/25 15:38:42 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap&);
		DiamondTrap& operator = (const DiamondTrap &other);

		~DiamondTrap();
		void attack(const std::string &target);
		void highFivesGuys();
		void guardGate();
		void whoAmI();
	private:
		std::string _name;

};