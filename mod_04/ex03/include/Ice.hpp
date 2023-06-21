/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:44:50 by bgales            #+#    #+#             */
/*   Updated: 2023/05/31 13:27:07 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice: public AMateria{
public:
	Ice();
	~Ice();
	Ice(const Ice&);
	Ice& operator=(const Ice &);

	void use(ICharacter &target);
	AMateria* clone() const;
};