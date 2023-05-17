/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:29:06 by bgales            #+#    #+#             */
/*   Updated: 2023/05/13 12:19:43 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>
#include <string.h>
#include "Contact.hpp"


class Phonebook{
	private:
		int _contact_nbr;
	public:
		Phonebook();
		~Phonebook();
		void	increase_contact();
		void	display_all();
		void	ask_index();
		int		display_one(std::string input);
		Contact list[9];

};

void	length_check(std::string str);