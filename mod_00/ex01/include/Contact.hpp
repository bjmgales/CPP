/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:27:49 by bgales            #+#    #+#             */
/*   Updated: 2023/05/13 12:21:53 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Phonebook.hpp"

class Contact
{
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string	_phone_number;
		std::string _secret;

	public:
		Contact(/* args */);
		~Contact();
		void		length_check(std::string str);
		std::string	get_info(std::string name);
		void		set_info();
};
