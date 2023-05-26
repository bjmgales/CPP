/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:50:32 by bgales            #+#    #+#             */
/*   Updated: 2023/05/26 18:34:28 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/**
 * @file Point.hpp
 *
 * @brief Defines the Point class and related functions.
 */

/**
 * @class Point
 *
 * @brief Represents a point in 2D space.
 */
class Point {
public:
    /**
     * @brief Default constructor for the Point class.
     */
    Point();

    /**
     * @brief Constructor for the Point class.
     *
     * @param x The x-coordinate of the point.
     * @param y The y-coordinate of the point.
     */
    Point(const float x, const float y);

    /**
     * @brief Copy constructor for the Point class.
     *
     * @param a The Point object to be copied.
     */
    Point(const Point& a);

    /**
     * @brief Assignment operator for the Point class.
     *
     * @param a The Point object to be assigned.
     * @return A reference to the assigned Point object.
     */
    Point& operator=(const Point& a);

    /**
     * @brief Destructor for the Point class.
     */
    ~Point();

    /**
     * @brief Retrieves the x or y coordinate of the point.
     *
     * @param type The coordinate type ('x' or 'y').
     * @return The value of the x or y coordinate.
     */
    Fixed get_x_y(int type);

    /**
     * @brief Sets the x or y coordinate of the point.
     *
     * @param newF The new value of the coordinate.
     * @param type The coordinate type ('x' or 'y').
     */
    void set_x_y(Fixed newF, int type);

    friend Fixed get_area(Point const A, Point const B, Point const C);

    friend void draw_triangle(Point a, Point b, Point c, Point point);

	private:
		Fixed const _x;
		Fixed const _y;
};

/**
 * @brief Calculates the area of a triangle formed by three points.
 *
 * @param A The first point of the triangle.
 * @param B The second point of the triangle.
 * @param C The third point of the triangle.
 * @return The area of the triangle.
 */
Fixed get_area(Point const A, Point const B, Point const C);

/**
 * @brief Draws a triangle using ASCII characters.
 *
 * @param a The first point of the triangle.
 * @param b The second point of the triangle.
 * @param c The third point of the triangle.
 * @param point The additional point to be included in the triangle.
 */
void draw_triangle(Point a, Point b, Point c, Point point);

/**
 * @brief Checks if a point is inside a triangle.
 *
 * @param a The first point of the triangle.
 * @param b The second point of the triangle.
 * @param c The third point of the triangle.
 * @param point The point to be checked.
 * @return True if the point is inside the triangle, false otherwise.
 */
bool bsp(Point const a, Point const b, Point const c, Point const point);
