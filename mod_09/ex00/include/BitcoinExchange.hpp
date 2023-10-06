/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:39:04 by bgales            #+#    #+#             */
/*   Updated: 2023/09/29 15:18:11 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <fstream>
#include <string>
#include <cstdlib>

#define MAXINT	2147483647

class BitcoinExchange{
	public:
		BitcoinExchange(){};
		BitcoinExchange(char *txtPath):_txtPath(txtPath){get_data();};
		BitcoinExchange(const BitcoinExchange& other);
		const BitcoinExchange& operator = (const BitcoinExchange& other);
		~BitcoinExchange(){};

		void get_data();
		void print_data();
		bool parse_csv();

	private:
		std::list<std::string> _csvData;
		std::list<std::string> _txtData;
		const char *_txtPath;
		unsigned int _csvSize;
};
