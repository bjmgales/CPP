/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:50:32 by bgales            #+#    #+#             */
/*   Updated: 2023/05/24 18:18:01 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point{
	public:
		Point();
		Point(const float x, const float y);
		Point (const Point &);
		Point& operator=(const Point &);
		~Point();
		Fixed get_x_y(int type);
		void set_x_y(Fixed newF, int type);
		friend Fixed get_area(Point const A, Point const B, Point const C);
		friend void draw_triangle
			( Point a, Point b, Point c, Point point);
	private:
		Fixed const _x;
		Fixed const _y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);