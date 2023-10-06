/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_sort.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 14:40:21 by bgales            #+#    #+#             */
/*   Updated: 2023/09/18 17:57:38 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "PmergeMe.hpp"

void print_array(std::vector<int> vArray){
	std::vector<int>::iterator it = vArray.begin();

	for (int i = 1; it != vArray.end();){
		std::cout << i << " elem=> " << *it << std::endl;
		i++;
		it++;
	}
	std::cout << std::endl;
}

void swap_elem(std::vector<int> &array){
	if (array.size() == 2){
		if (*array.begin() > *(array.begin() + 1))
			std::swap(*array.begin(), *(array.begin() + 1));
	}
}

void vector_merge(std::vector<int> &left, std::vector<int> &right){
	std::vector<int> merged;
	std::vector<int>::iterator l_it = left.begin();
	std::vector<int>::iterator r_it = right.begin();
	std::vector<int>::iterator m_it;

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

void vector_sort(std::vector<int> &vArray){
	size_t middle = (vArray.size() / 2 );
	std::vector<int> l_vArray;
	std::vector<int> r_vArray;
	 if (vArray.size() <= 1) {
		return;
	}
	for (size_t i = 0; i < vArray.size();){
		if (i < middle)
			l_vArray.push_back(vArray[i]);
		else
			r_vArray.push_back(vArray[i]);
		i++;
	}

	vector_sort(r_vArray);
	vector_sort(l_vArray);
	vector_merge(l_vArray, r_vArray);

	vArray = r_vArray;
}

void no_duplicate(std::vector<int> &vArray){
	std::vector<int>::iterator it_b = vArray.begin();
	while (it_b != vArray.end()){
		std::vector<int>::iterator it = it_b + 1;
		while (it != vArray.end()){
			if (*it == *it_b){
				std::swap(*it, vArray.back());
				vArray.pop_back();
			}
			else
				it++;
		}
		it_b++;
	}
}

void vector_start(std::string *sArray){
	struct timeval tp;
	gettimeofday(&tp, NULL);
	long int start = 1000000 * tp.tv_sec + tp.tv_usec;
	std::vector<int> vArray;

	while (!sArray->empty()){
		vArray.push_back(static_cast<int>(std::strtod(sArray->c_str(), NULL)));
		sArray++;
	}
	no_duplicate(vArray);
	vector_sort(vArray);
	gettimeofday(&tp, NULL);
	long int end = 1000000 * tp.tv_sec + tp.tv_usec;
	std::cout << GREEN << "Time to process a range of " << vArray.size() <<
	" elements with" << MAGENTA << " std::vector: " << std::fixed << std::setprecision(5) <<  RESET << end - start << "µs" << std::endl;
}
