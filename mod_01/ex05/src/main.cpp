/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:13:39 by bgales            #+#    #+#             */
/*   Updated: 2023/06/28 11:15:40 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <unistd.h>

int main()
{
	Harl toto;

							/*************/
							/*	 DEBUG	*/
/***************************************************************************/

	std::cout << RED << "DEBUG message incoming:\n" << RESET << std::endl;
	sleep(1);
	toto.complain("DEBUG");
	sleep(1);

							/*************/
							/*	 INFO	*/
/***************************************************************************/

	std::cout << RED << "INFO message incoming:\n" << RESET << std::endl;
	sleep(1);
	toto.complain("INFO");
	sleep(2);
							/*************/
							/*	WARNING	*/
/***************************************************************************/

	std::cout << RED << "WARNING message incoming:\n" << RESET << std::endl;
	sleep(1);
	toto.complain("WARNING");
	sleep(2);
							/*************/
							/*	 ERROR	*/
/***************************************************************************/

	std::cout << RED << "ERROR message incoming:\n" << RESET << std::endl;
	sleep(1);
	toto.complain("ERROR");
	sleep(3);
							/****************/
							/*	 SH*T CASE	*/
/***************************************************************************/

	std::cout << RED << "no message incoming:\n" << RESET << std::endl;
	sleep(1);
	toto.complain("Wrong_input");
	sleep(1);


	std::cout << RED << "still no message incoming:\n" << RESET <<std::endl;
	sleep(1);
	toto.complain("");
	sleep(1);


	std::cout << RED << "no... still not.\n" << RESET << std::endl;
	sleep(1);
	toto.complain("warning");
	sleep(1);

}