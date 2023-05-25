/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:55:19 by bgales            #+#    #+#             */
/*   Updated: 2023/05/25 11:19:57 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <unistd.h>

int get_biggest(int *tab)
{
	int size = 4;
	int c = 0;
	for (int i = 0; i < size; i++)
	{
		if (tab[i] > 49)
			return (0);
		if (tab[c] < tab[i])
			c = i;
	}
	return (tab[c]);
}

void draw_triangle(Point a, Point b, Point c, Point point) {

	char draw[50][50];
	int size[2];
	int xs[] = {a._x.toInt(), b._x.toInt(), c._x.toInt(), point._x.toInt()};
	int ys[] = {a._y.toInt(), b._y.toInt(), c._y.toInt(), point._y.toInt()};
	int	l_x;
	int	l_y;

	l_x = get_biggest(xs);
	l_y = get_biggest(ys);
	for (int i = 0; i <= l_y + 1; i++) {
		for (int j = 0; j <= l_x+ 2; j++) {
			if (j < l_x)
				draw[i][j] = ' ';
			else
				draw[i][j] = '\0';
		}
	}
	draw[a._y.toInt()][a._x.toInt()] = '.';
	draw[a._y.toInt()][a._x.toInt()+ 1] = 'A';
	draw[b._y.toInt()][b._x.toInt()+ 1] = 'B';
	draw[b._y.toInt()][b._x.toInt()] = '.';
	draw[c._y.toInt()][c._x.toInt()+ 1] = 'C';
	draw[c._y.toInt()][c._x.toInt()] = '.';
	draw[point._y.toInt()][point._x.toInt() + 1] = 'H';
	draw[point._y.toInt()][point._x.toInt()] = '.';

	for (int i = 0; i < l_y + 1; i++)
		std::cout << draw[i] << std::endl;
}


int main(){

/****************************Inside the triangle tests**********************************/


	Point A(0, 0);
	Point B(30, 0);
	Point C(15, 30);

		/***********************Right in the middle***************************/

	if ( bsp(A, B, C, Point (15, 15)) == true)
		std::cout << "\n\nH point is" << BOLDRED << " inside " << RESET
		<< "the triangle\n" << std::endl;
	else
		std::cout << "H point is" << BOLDRED << " outside " << RESET
		<< "the triangle\n" << std::endl;

	draw_triangle(A, B, C,  Point (15, 15));

	sleep (10);
		/***********************Right bottom corner***************************/

	if ( bsp(A, B, C, Point (29, 1)) == true)
		std::cout << "H point is" << BOLDRED << " inside " << RESET
		<< "the triangle\n\n" << std::endl;
	else
		std::cout << "H point is" << BOLDRED << " outside " << RESET
		<< "the triangle\n" << std::endl;
	draw_triangle(A, B, C,  Point (29, 1));
	sleep (10);

/****************************Outside the triangle tests**********************************/


		/***********************Far away***************************/

	if ( bsp(A, B, C, Point (40, 40)) == true)
		std::cout << "H point is" << BOLDRED << " inside " << RESET
		<< "the triangle\n" << std::endl;
	else
		std::cout << "H point is" << BOLDRED << " outside " << RESET
		<< "the triangle\n" << std::endl;
	draw_triangle(A, B, C,  Point (40, 40));
	sleep (10);

		/***********************On the edge***************************/


	if ( bsp(A, B, C, Point (10, 0)) == true)
		std::cout << "H point is" << BOLDRED << " inside " << RESET
		<< "the triangle\n" << std::endl;
	else
		std::cout << "H point is" << BOLDRED << " outside " << RESET
		<< "the triangle\n" << std::endl;
	draw_triangle(A, B, C,  Point (10, 0));
	sleep (10);
}