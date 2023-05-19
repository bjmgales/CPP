/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:13:39 by bgales            #+#    #+#             */
/*   Updated: 2023/05/19 12:07:16 by bgales           ###   ########.fr       */
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

	std::cout << "DEBUG message incoming:\n" << std::endl;
	sleep(1);
	toto.complain("DEBUG");
	sleep(1);

							/*************/
							/*	 INFO	*/
/***************************************************************************/

	std::cout << "INFO message incoming:\n" << std::endl;
	sleep(1);
	toto.complain("INFO");
	sleep(2);
							/*************/
							/*	WARNING	*/
/***************************************************************************/

	std::cout << "WARNING message incoming:\n" << std::endl;
	sleep(1);
	toto.complain("WARNING");
	sleep(2);
							/*************/
							/*	 ERROR	*/
/***************************************************************************/

	std::cout << "ERROR message incoming:\n" << std::endl;
	sleep(1);
	toto.complain("ERROR");
	sleep(3);
							/****************/
							/*	 SH*T CASE	*/
/***************************************************************************/

	std::cout << "no message incoming:\n" << std::endl;
	sleep(1);
	toto.complain("Wrong_input");
	sleep(1);


	std::cout << "still no message incoming:\n" << std::endl;
	sleep(1);
	toto.complain("");
	sleep(1);


	std::cout << "no... still not.\n" << std::endl;
	sleep(1);
	toto.complain("warning");
	sleep(1);

}