/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:49:27 by bgales            #+#    #+#             */
/*   Updated: 2023/09/27 11:25:16 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RPN.h"

bool in_set(char c, std::string set){

	for (int i = 0; set[i]; i++){
		if (c == set[i])
			return true;
	}
	return false;
}

bool is_operator(int token){
	if (token == ADDITION || token == MULTIPLICATION || token == SUBSTRACTION || token == DIVISION)
		return true;
	return false;
}

int doCalc(int n1, int n2, int token){
	if (token == ADDITION)
		return (n1 + n2);
	else if (token == MULTIPLICATION)
		return (n1 * n2);
	else if (token == SUBSTRACTION)
		return (n1 - n2);
	else if (token == DIVISION)
		return (n1 / n2);
	return 0;
}

void stack_calc(char *argv, std::stack<int> *myStack){

	int tmp;
	bool isZero = false;

	if (argv && *argv != ' ' && (*argv < '0' || *argv > '9')){
		std::cout << "Error."<< std::endl;
		return;
	}
	while(argv && *argv){
		if (is_operator(*argv) == true){
			if (*argv == '/' && isZero == true){
				std::cerr << "Error: Cannot divide by 0" << std::endl;
				return;
			}
			else
				isZero = false;
			tmp = myStack->top();
			myStack->pop();
			if (myStack->empty()){
				std::cerr << "Error: RPN syntax error" << std::endl;
				return;
			}
			myStack->top() = doCalc(myStack->top(), tmp, *argv);
			break;
		}
		if (*argv >= '0' && *argv <= '9'){
			if (*argv == '0')
				isZero = true;
			myStack->push(*argv - '0');
			argv++;
		}
		if (*argv != ' '){
			std::cout << "Error." << std::endl;
			return;
		}
		if (*argv)
			argv++;
	}
	if (argv && *argv && *(argv + 1))
		stack_calc(argv + 1, myStack);
	else{
			std::cout << myStack->top() << std::endl;
	}
}
