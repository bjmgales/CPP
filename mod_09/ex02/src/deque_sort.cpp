/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_sort.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:40:21 by bgales            #+#    #+#             */
/*   Updated: 2023/09/29 15:20:57 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "PmergeMe.hpp"
#include <ctime>

void print_array(std::deque<int> dArray){
	std::deque<int>::iterator it = dArray.begin();

	for (int i = 1; it != dArray.end();){
		std::cout << i << " elem=> " << *it << std::endl;
		i++;
		it++;
	}
	std::cout << std::endl;
}

void swap_elem(std::deque<int> &array){
	if (array.size() == 2){
		if (*array.begin() > *(array.begin() + 1))
			std::swap(*array.begin(), *(array.begin() + 1));
	}
}

void deque_merge(std::deque<int> &left, std::deque<int> &right){
	std::deque<int> merged;
	std::deque<int>::iterator l_it = left.begin();
	std::deque<int>::iterator r_it = right.begin();
	std::deque<int>::iterator m_it;

	while (l_it != left.end() && r_it != right.end()){
		if (*l_it >= *r_it){
			merged.push_back(*l_it);
			if (*r_it == *l_it)
				r_it++;
			l_it++;
		}
		else{
			merged.push_back(*r_it);
			if (*r_it == *l_it)
				l_it++;
			r_it++;
		}
	}

	m_it = merged.begin();

	for (int i = 0; l_it != left.end();){

		if (*m_it < *l_it && m_it != merged.end())
			m_it++;
		else if (*m_it == *l_it){
			l_it++;
			m_it = merged.begin();
		}
		else{
			merged.insert(merged.begin() + i, *l_it);
			m_it = merged.begin();
			i = -1;
			l_it++;
		}
		i++;
	}

	for (int i = 0; r_it != right.end();){
		if (*m_it <= *r_it && m_it != merged.end())
			m_it++;
		else if (*m_it == *r_it){
			r_it++;
			m_it = merged.begin();
		}
		else{
			merged.insert(merged.begin() + i, *r_it);
			m_it = merged.begin();
			i = -1;
			r_it++;
		}
		i++;
	}

	right = merged;
}

void deque_sort(std::deque<int> &dArray){
	size_t middle = (dArray.size() / 2 );
	std::deque<int> l_dArray;
	std::deque<int> r_dArray;
	 if (dArray.size() <= 1) {
		return;
	}
	for (size_t i = 0; i < dArray.size();){
		if (i < middle)
			l_dArray.push_back(dArray[i]);
		else
			r_dArray.push_back(dArray[i]);
		i++;
	}

	deque_sort(r_dArray);
	deque_sort(l_dArray);
	deque_merge(l_dArray, r_dArray);

	dArray = r_dArray;
}

void no_duplicate(std::deque<int> &dArray){
	std::deque<int>::iterator it_b = dArray.begin();
	unsigned int size = dArray.size();
	while (it_b != dArray.end()){
		std::deque<int>::iterator it = it_b + 1;
		while (it != dArray.end()){
			if (*it == *it_b){
				std::swap(*it, dArray.back());
				dArray.pop_back();
			}
			else
				it++;
		}
		it_b++;
	}
	if (size != dArray.size())
		std::cout << RED << "Warning: duplicate values detected." <<
			" Continuing without duplicate." << RESET << std::endl;
}

void deque_start(std::string *sArray){
	struct timeval tp;
	gettimeofday(&tp, NULL);
	long int start = 1000000 * tp.tv_sec + tp.tv_usec;
	std::deque<int> dArray;

	while (!sArray->empty()){
		dArray.push_back(static_cast<int>(std::strtod(sArray->c_str(), NULL)));
		sArray++;
	}
	no_duplicate(dArray);
	deque_sort(dArray);
	gettimeofday(&tp, NULL);
	long int end = 1000000 * tp.tv_sec + tp.tv_usec;
	std::cout << "After: ";
	for (unsigned int i = 0; i < dArray.size(); i++){
		std::cout << dArray[i] << " ";
	}
	std::cout << std::endl;
	std::cout << GREEN << "Time to process a range of " << dArray.size() <<
	" elements with" << MAGENTA << " std::deque: " << std::fixed << std::setprecision(5) <<  RESET << end - start << "µs" << std::endl;
}
