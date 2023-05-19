/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:13:39 by bgales            #+#    #+#             */
/*   Updated: 2023/05/19 12:47:13 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <unistd.h>

int main(int argc, char **argv)
{
	Harl toto;

	if (argc != 2)
	{
		std::cout << "Expecting : \"./program_name level\"" << std::endl;
		return (1);
	}
	std::string level = argv[1];
	toto.complain(level);


}