/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 12:18:25 by bgales            #+#    #+#             */
/*   Updated: 2023/06/21 11:16:14 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	Phonebook::display_one(std::string input)
{
	int	index;

	if (input < "1"  || input > "8" || input.length() > 1)
		return (1);
	index = input[0] - 49;
	if (index >= _contact_nbr)
		return (1);
	std::cout << "FIRST NAME :" << list[index].get_info("_first_name") << std::endl;
	std::cout << "LAST NAME :" << list[index].get_info("_last_name") << std::endl;
	std::cout << "NICKNAME :" << list[index].get_info("_nickname") << std::endl;
	std::cout << "PHONE NUMBER :" << list[index].get_info("_phone_number") << std::endl;
	std::cout << "DARKEST SECRET :" << list[index].get_info("_secret") << std::endl;
	std::cout << "\n" << "Press ENTER to continue...\n";
	 while (std::cin.get() != '\n')
	 {
	 	if (std::cin.eof())
			exit (0) ;
	 }
	std::cout << "\n\nBACK TO SEARCH MENU\n" << std::endl;
	display_all();
	return (0);
}

void	Phonebook::ask_index()
{
	std::string	input;

	std::cout << "\n\nPlease type index of the contact to be displayed, or type \"RETURN\" to get back to main menu."
		 << std::endl;
	while (1)
	{
		std::getline(std::cin >> std::ws,  input);
		if (std::cin.eof())
			exit (0) ;
		if (input == "RETURN")
			break;
		else if (display_one(input))
			std::cout << "Please enter a valid contact index, or type \"RETURN\" to get back to the main menu."
				 << std::endl;
		else
			break;
	}
}
void	Phonebook::display_all()
{

	if (!_contact_nbr)
	{
		std::cout << "\nNo contact to be displayed" << std::endl;
		return ;
	}

	std::cout << "\n" << "|" << std::setw(10) << "INDEX" << "|"
	<< "FIRST NAME" << "|" << std::setw(10) << "LAST NAME"
		<< "|" << std::setw(9) << "NICKNAME" << std::setw(2) << "|" << std::endl;

	for (int i = 0; i < _contact_nbr; i++)
	{
		std::cout << "|" <<  std::setw(10) <<  i + 1 << "|";
		length_check(list[i].get_info("_first_name"));
		length_check(list[i].get_info("_last_name"));
		length_check(list[i].get_info("_nickname"));
		std::cout<< std::endl;
	}
	ask_index();
	return;
}

