/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:57:40 by bgales            #+#    #+#             */
/*   Updated: 2023/09/09 16:08:37 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#pragma once

class Span
{
	public:

	Span();
	Span(unsigned int size);
	Span (const Span &);
	Span & operator = (const Span &);
	~Span();

	void addNumber(int n);
	void addNumberRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	void printArray();
	unsigned int shortestSpan();
	unsigned int longestSpan();

	private:

	unsigned int _size;
	std::vector<int> _array;
};
