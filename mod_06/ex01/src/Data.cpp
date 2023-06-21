/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:57:38 by bgales            #+#    #+#             */
/*   Updated: 2023/06/06 15:46:00 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(std::string name):_name(name){
}

Data::Data(const Data&other):_name(other._name){

}

Data& Data::operator=(const Data& other){
	if (this != &other)
		_name = other._name;
	return (*this);
}

Data::~Data(){
}

std::string Data::getName(){
	return (_name);
}