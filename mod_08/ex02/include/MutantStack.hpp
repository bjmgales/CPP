/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:28:07 by bgales            #+#    #+#             */
/*   Updated: 2023/09/11 19:24:42 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <stack>
#pragma once

template <typename T>
class MutantStack: public std::stack<T, std::deque<T> > {
	public:
		MutantStack();
		MutantStack(const MutantStack &other);
		MutantStack & operator =(const MutantStack &other);
		~MutantStack();
		typename std::deque<T>::iterator begin();
		typename std::deque<T>::iterator end();
		typedef typename std::deque<T>::iterator iterator;
};


template<typename T>
MutantStack<T>::MutantStack(){
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack& other){
	this->c = other.c;
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator =(const MutantStack<T>& other){
	if (this != &other)
		this->c = other.c;
	return (*this);
}

template<typename T>
MutantStack<T>::~MutantStack(){
}

template<typename T>
typename std::deque<T>::iterator  MutantStack<T>::begin(){
	return (this->c.begin());
}

template<typename T>
typename std::deque<T>::iterator  MutantStack<T>::end(){
	return (this->c.end());
}
