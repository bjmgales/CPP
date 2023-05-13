/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:55:44 by bgales            #+#    #+#             */
/*   Updated: 2023/05/13 12:33:43 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Phonebook.hpp"

Phonebook::Phonebook():_contact_nbr(0){
}
Phonebook::~Phonebook(){
}

Contact::Contact()
{
}
Contact::~Contact()
{
}

int main(void)
{
	Phonebook 	book;
	std::string	input;
	int			i;
	i = -1;
	while (1)
	{
		std::cout << "\nADD or SEARCH a contact, type EXIT to quit." << std::endl;
		std::cin >> input;
		if (input == "ADD")
		{
			if (i + 1 == 8)
				i = 6;
			book.list[++i].set_info();
			book.increase_contact();
		}
		if (input == "SEARCH")
			book.display_all();
		if (input == "EXIT")
			break;
	}
	return (0);
}