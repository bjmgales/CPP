/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:45:31 by bgales            #+#    #+#             */
/*   Updated: 2023/05/31 13:27:02 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Cure: public AMateria{
public:
	Cure();
	~Cure();
	Cure(const Cure&);
	Cure& operator=(const Cure &);

	void use(ICharacter &target);
	AMateria* clone() const;
};