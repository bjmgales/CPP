/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:52:50 by bgales            #+#    #+#             */
/*   Updated: 2023/09/18 18:10:31 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool parse_args(char **argv){
	for (int i = 0; argv[i]; i++)
		for(int c = 0; argv[i][c]; c++)
			if (argv[i][c] < '0' || argv[i][c] > '9'){
				std::cout << "Error: invalid arguments: " << argv[i] << std::endl;
				return (false);
			}
	std::cout << "Before: ";
	for (int i = 0; argv[i]; i++)
		std::cout << argv[i] << ' ';
	std::cout << std::endl;
	return (true);
}

int main(int argc, char **argv){
	std::string array[argc];
	if (argc < 3){
		std::cout << "Error: expected input: \"./program_name 1 2 ...\""<< std::endl;
		return (-1);
	}
	argv++;
	for (int i = 0; argv[i]; i++){
		array[i] = argv[i];
		if (array[i] == "0"){

			std::cout << "Error: 0 is not a positive number." << std::endl;
			return -1;
		}

	}
	if(parse_args(argv) == false)
		return (-1);
	deque_start(array);
	vector_start(array);
}
