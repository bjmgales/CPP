/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:23:06 by bgales            #+#    #+#             */
/*   Updated: 2023/05/19 11:34:29 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Harl
{
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();

	public:
		Harl(/* args */);
		~Harl();
		void (Harl::*functptr[4])();
		void	complain(std::string level);
};

