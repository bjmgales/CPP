/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:26:49 by bgales            #+#    #+#             */
/*   Updated: 2023/05/31 14:10:39 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class	Character: public ICharacter{
public:
	Character();
	Character(std::string name);
	~Character();
	Character(const Character&);
	Character& operator=(const Character &);

	void use(int idx, ICharacter &target);
	void equip(AMateria* m);
	void unequip(int idx);
	std::string const & getName() const;

private:
	AMateria* _inventory[4];
	std::string _name;
};