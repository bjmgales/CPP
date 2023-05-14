/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_get.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 12:13:22 by bgales            #+#    #+#             */
/*   Updated: 2023/05/14 12:36:56 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	Phonebook::increase_contact()
{
	if (_contact_nbr < 8)
		_contact_nbr++;
}

std::string Contact::get_info(std::string name)
{
	if (name == "_first_name")
		return (_first_name);
	if (name == "_last_name")
		return (_last_name);
	if (name == "_nickname")
		return (_nickname);
	if (name == "_secret")
		return (_secret);
	if (name == "_phone_number")
		return (_phone_number);
	return (NULL);
}

void	Contact::set_info()
{
		std::cout << "\nEnter first name : " << std::endl;
		std::getline(std::cin >> std::ws, _first_name);
		if (std::cin.eof())
			exit (0) ;
		std::cout << "Enter last name : " << std::endl;
		std::getline(std::cin >> std::ws, _last_name);
		if (std::cin.eof())
			exit (0) ;
		std::cout << "Enter _nickname : " << std::endl;
		std::getline(std::cin >> std::ws, _nickname);
		if (std::cin.eof())
			exit (0) ;
		std::cout << "Enter phone number : " << std::endl;
		std::getline(std::cin >> std::ws, _phone_number);
		if (std::cin.eof())
			exit (0) ;
		std::cout << "Enter darkest secret : " << std::endl;
		std::getline(std::cin >> std::ws, _secret);
		if (std::cin.eof())
			exit (0) ;
	return;
}