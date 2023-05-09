/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:29:06 by bgales            #+#    #+#             */
/*   Updated: 2023/05/09 17:38:53 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Contact.hpp"

class Phonebook{
	private:

	public:
		Phonebook(){};
		~Phonebook();
		Contact list[9];

};

Phonebook(){
	std::cout << "Phonebook created" << std::endl;
}