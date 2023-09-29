/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:41:33 by bgales            #+#    #+#             */
/*   Updated: 2023/09/09 16:23:48 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{

	Span big(10000);
	std::vector<int> array;

				/*Too big array to fit in Span::_array*/

	for (int i = 0; i < 20000000; i++)
		array.push_back(i);
	big.addNumberRange(array.begin(), array.end());
	array.clear();

				/*Add large number range inside array****/

	for (int i = 0; i < 10000; i++)
		array.push_back(i);
	big.addNumberRange(array.begin(), array.end());
	// big.printArray();

				/*Too small Array to calculate shortest/longest span*/

	Span sp = Span(5);
	sp.shortestSpan();
	sp.longestSpan();

				/********42 SUBJECT TEST**************/

	std::cout << "\n\n42 SUBJECT TEST :\n" << std::endl;
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(10);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
