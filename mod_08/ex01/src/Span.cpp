/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:50:00 by bgales            #+#    #+#             */
/*   Updated: 2023/09/09 16:11:43 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::~Span(){
}
Span::Span(){
}

Span::Span(unsigned int size):_size(size){
}

Span::Span(const Span& other):_size(other._size), _array(other._array){
}

Span& Span::operator= (const Span& other){
	if (this != &other)
	{
		this->_size = other._size;
		this->_array = other._array;
	}
	return (*this);
}

void Span::addNumber(int n){
	try
	{
		if (_array.size() >= _size)
			throw std::runtime_error("Array maximum capacity already reached.");
		else
			_array.push_back(n);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void Span::addNumberRange(std::vector<int>::iterator begin, std::vector<int>::iterator end){

	unsigned int rangeSize = std::distance(begin, end);
	try {
		if (rangeSize > this->_size - this->_array.size())
			throw std::runtime_error("Range is too big to fit in the array.");
		else
			for (; begin != end; begin++)
				this->addNumber(*begin);
	}
	catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
}
void Span::printArray(){

	std::vector<int>::iterator it =  _array.begin();

	for (; it != _array.end(); it++)
		std::cout << *it << std::endl;
}
unsigned int Span::shortestSpan(){


	try{
		if (_array.size() < 2)
			throw std::runtime_error ("At least two element needed in order to calculate span.");
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (0);
	}
	unsigned int ret = *std::max_element(_array.begin(), _array.end());
	std::vector<int>::iterator it = _array.begin();

	for (int i  = 0; it != _array.end(); it++){
		if ((*it > *(_array.begin() + i)) &&  *it - *(_array.begin() + i) < ret)
		{
			ret = (*it - *(_array.begin() + i));

		}
		if (*it < *(_array.begin() + i) && *(_array.begin() + i) - *it < ret)
			{

				ret = (*(_array.begin() + i) - *it);
			}
		if ((it + 1) == _array.end() && i != _array.size())
		{
			it = _array.begin();
			i++;
		}
	}
	return (ret);
}

unsigned int Span::longestSpan(){

	try{
		if (_array.size() < 2)
			throw std::runtime_error("At least two element needed in order to calculate span.");
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (0);
	}
	return (*std::max_element(_array.begin(), _array.end()) -
				*std::min_element(_array.begin(), _array.end()));
}
