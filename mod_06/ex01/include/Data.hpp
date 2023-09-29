/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:55:28 by bgales            #+#    #+#             */
/*   Updated: 2023/09/29 16:58:11 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Serializer.hpp"
#include <iostream>


class Data{
	private:
		std::string _name;
	public:
		Data(std::string name);
		Data(const Data& other);
		Data& operator = (const Data & other);
		~Data();

	std::string getName();
};
