/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 12:53:37 by bgales            #+#    #+#             */
/*   Updated: 2023/07/12 12:48:50 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
class Array
{
private:
	T	data;
	T	size;
public:
	Array();
	~Array();
};

#include "Array.tpp"
