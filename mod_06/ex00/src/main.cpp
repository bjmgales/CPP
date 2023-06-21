/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:42:09 by bgales            #+#    #+#             */
/*   Updated: 2023/06/06 10:23:09 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv){

	if (argc != 2){
		std::cout << "Expected : \"./program_name arg\"" << std::endl;
		return (1);
	}
	ScalarConverter().convert(argv[1]);
}