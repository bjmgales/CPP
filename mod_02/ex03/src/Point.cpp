/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:56:44 by bgales            #+#    #+#             */
/*   Updated: 2023/05/24 14:00:58 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/**************************CONSTRUCTORS/DESTRUCTORS*****************************/

Point::Point():_x(0), _y(0){
}

Point::Point(const float x, const float y):_x(x), _y(y){
}

Point::Point(Point const &a):_x(a._x), _y(a._y){
}

Point::~Point(){
}

/****************************OVERLOADED OPERATORS FUNCTIONS**********************************/

Point& Point::operator =(Point const &a){
	set_x_y(a._x, 'x');
	set_x_y(a._y, 'y');
	return (*this);
}

/****************************MEMBERS FUNCTIONS**********************************/

Fixed Point::get_x_y(int type){
	if (type == 'x')
		return (_x);
	if (type == 'y')
		return (_y);
	return (Fixed());
}

void Point::set_x_y(Fixed newF, int type){
	if (type == 'x')
		set_x_y(newF, 'x');
	if (type == 'y')
		set_x_y(newF, 'y');
}