/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:09:44 by bgales            #+#    #+#             */
/*   Updated: 2023/09/16 22:40:36 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <vector>
#include <map>
#include "RPN.h"

bool arg_check(int argc, char **argv){

	std::string calc;
	int			opCount = 0, numCount = 0;

	try{
		if (argc != 2)
			throw std::runtime_error("Error: expected format : \"./program_name \"1 2 + 3 * \"");
		calc = argv[1];
		if (calc.empty() || calc.find_first_not_of("-*+/0123456789 ") != std::string::npos)
			throw std::runtime_error("Error: expected format: \"./program_name \"1 2 + 3 * \"");
		if (in_set(argv[1][0], "0123456789") == false)
			throw std::runtime_error("Error: expected format: \"./program_name \"1 2 + 3 *\"");
		for (int i = 0; argv[1][i]; i++){
			if (in_set(argv[1][i], "0123456789*+-/") == true)
				if (argv[1][i + 1] != ' ' && argv[1][i + 1] != '\0')
					throw std::runtime_error("Error: parse error: token has two or more characters.");
			if (argv[1][i] == ' ')
				if (in_set(argv[1][i + 1], "0123456789*+-/") == false)
					throw std::runtime_error("Error: parse error: wrong \\sp managment.");
			if (in_set(argv[1][i], "*+-/") == true)
				opCount++;
			else if (in_set(argv[1][i], "0123456789") == true)
				numCount++;
		}
		if (opCount != numCount - 1)
			throw std::runtime_error ("Error: wrong input.");
	}
	catch (const std::exception &e){
		std::cerr << e.what() << std::endl;
		return (false);
	}
	return (true);
}

int main(int argc, char **argv)
{
	std::string calc;
	std::vector<element> array;
	std::stack<int> myStack;
	if(arg_check(argc, argv) == false)
		return (-1);

	stack_calc(argv[1], &myStack);
	// split_str(calc, array);
}


