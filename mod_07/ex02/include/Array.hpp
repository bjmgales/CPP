/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:02:37 by bgales            #+#    #+#             */
/*   Updated: 2023/08/28 11:11:50 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#pragma once

#define R   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BR     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */


template<typename T>
class Array{
public:
	Array(void);
	Array(unsigned int n);
	~Array();
	Array(const Array&);
	Array& operator =(const Array &);

	unsigned int getSize() const;
	T& operator[](unsigned int index);
	class WrongIndex: public std::exception{
		public:
			virtual const char *what() const throw();
	};

private:
	unsigned int _size;
	T *_tab;
};


template<typename T>
Array<T>::Array():_size(0){
	std::cout << "Array default constructor called" << std::endl;
}

template<typename T>
Array<T>::Array(unsigned int n):_size(n){
	std::cout << "Array default constructor called" << std::endl;
	if (n != 0)
		_tab = new T[n];
}

template<typename T>
Array<T>::Array(const Array<T>& other):_size(other._size){
	if (this != &other)
	{
		_size = other._size;
		this->_tab = new T[_size];
		for (int i = 0; i < _size; i++)
			this->_tab[i] = other._tab[i];
	}
}

template<typename T>
Array<T>& Array<T>::operator =(const Array<T>&other){
	if (this != &other)
	{
		_size = other._size;
		_tab = new T[_size];
		for (int i = 0; i < _size; i++)
			_tab[i] = other._tab[i];
	}
}
template<typename T>
unsigned int Array<T>::getSize() const{
	return (_size);
}

template<typename T>
const char *Array<T>::WrongIndex::what() const throw(){
	return ("Wrong index exception.");
}


template<typename T>
T& Array<T>::operator [](unsigned int index){
	try
	{
		if (!_tab)
			throw WrongIndex();
		else if (index >= _size)
			throw WrongIndex();
		else if (index < 0)
			throw WrongIndex();

	}
	catch(const std::exception& e)
	{
		std::cerr << GREEN << e.what() << R << std::endl;
	}
		return _tab[index];
}

template<typename T>
Array<T>::~Array(){
	std::cout << "Array destructor called" << std::endl;
	if (_size)
		delete [] _tab;
}

