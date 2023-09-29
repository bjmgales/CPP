/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:57:19 by bgales            #+#    #+#             */
/*   Updated: 2023/09/16 18:24:26 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <stack>
#include <map>

struct element{
	int token;
	std::string value;
};

enum{
	NUMBER,
	WHITESPACE,
	MULTIPLICATION = 42,
	ADDITION,
	SUBSTRACTION = 45,
	DIVISION = 47
};


void split_str(std::string calc, std::vector<element> array);
bool in_set(char c, std::string set);
void stack_calc(char *argv, std::stack<int> *myStack);
