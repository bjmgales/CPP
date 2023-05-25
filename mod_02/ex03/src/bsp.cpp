/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:59:59 by bgales            #+#    #+#             */
/*   Updated: 2023/05/24 17:19:30 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	get_area(Point A, Point B, Point C){
	Fixed ret((A._x.toFloat() * (B._y.toFloat() - C._y.toFloat())
		+ B._x.toFloat() * (C._y.toFloat() - A._y.toFloat())
		+ C._x.toFloat() * (A._y.toFloat() - B._y.toFloat())) / 2);

	if (ret < 0)
		ret = ret * -1;
	return (ret);
}

bool bsp( Point const a, Point const b, Point const c, Point const point){

	Fixed myTriangleArea(get_area(a, b, c));
	Fixed myNewArea(get_area(a, b, point) + get_area(a, point, c)
		+ get_area(point, b, c));
	if (get_area(a, b, point) == Fixed(0)
		|| get_area(a, point, c) == Fixed(0)
		|| get_area(point, b, c) == Fixed(0))
		return (false);
	if (myTriangleArea != myNewArea)
		return (false);
	return (true);
}