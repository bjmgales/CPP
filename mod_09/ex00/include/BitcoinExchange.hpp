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
		bool parse_csv(std::list<std::string> csvData);

	private:
		std::list<std::string> _csvData;
		std::list<std::string> _txtData;
		const char *_txtPath;
		unsigned int _csvSize;
};

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other):
				_csvData(other._csvData), _txtData(other._txtData){};

const BitcoinExchange& BitcoinExchange::
	operator =(const BitcoinExchange& other){
			if (this != &other)
			{
				_csvData = other._csvData;
				_txtData = other._txtData;
			}
			return (*this);
};

bool parse_date_txt(std::string str){

	std::string value;
	if (str.empty() || str.length() < 12)
		return false;

	if (str.find_first_not_of("0123456789") != 4 || str[4] != '-'
			|| str.find_first_not_of("0123456789", 5) != 7 || str[7] != '-'
			|| str.find_first_not_of("0123456789", 8) != 10 || str.substr(10, 3) != " | ")
		return false;
	value = str.substr(13);
	if (value.empty() || value.find_first_of('.') != value.find_last_of('.') || value.find_first_of('-') != value.find_last_of('-')
			|| value.find_first_not_of("-.0123456789") != std::string::npos || (value.find_first_of('-') != std::string::npos && value[0] != '-'))
			return false;
	return true;
}


void get_values(std::string line, int *year, int *month, int *day, float *value, std::string txtorcsv){

	*year = static_cast<int>(std::strtol(line.substr(0, 4).c_str(), NULL, 10));
	*month = static_cast<int>(std::strtol(line.substr(5, 2).c_str(), NULL, 10));
	*day = static_cast<int>(std::strtol(line.substr(8, 2).c_str(), NULL, 10));
	if (txtorcsv == "txt")
		*value = std::strtod(line.substr(13).c_str(), NULL);
	else if (txtorcsv == "csv")
		*value = std::strtod(line.substr(11).c_str(), NULL);
}

bool parse_values(int year, int month, int day, float value, std::string txtorcsv){
	if (((month < 8 && (month % 2) == 0 && day > 30) || (month >= 8 && month % 2 && day > 30)))
		return false;
	if (month == 2 && day > 29)
		return false;
	if (((year % 4) != 0 && ((year % 100) == 0 || (year % 400 != 0))) && month == 2 && day > 28)
		return false;
	if (txtorcsv == "txt" && (value < 0 || value > 1000))
		return false;
	else if (txtorcsv == "csv" && value < 0)
		return false;
	return true;


}

bool parse_date_csv(std::string str){

	std::string value;
	if (str.empty() || str.length() < 12)
		return false;
	if (str.find_first_not_of("0123456789") != 4 || str[4] != '-'
			|| str.find_first_not_of("0123456789", 5) != 7 || str[7] != '-'
			|| str.find_first_not_of("0123456789", 8) != 10 || str[10] != ',')
		return false;
	value = str.substr(11);
	if (value.empty() || value.find_first_of('.') != value.find_last_of('.') || value.find_first_of('-') != value.find_last_of('-')
			|| value.find_first_not_of("-.0123456789") != std::string::npos || (value.find_first_of('-') != std::string::npos && value[0] != '-'))
			return false;
	return true;
}

bool BitcoinExchange::parse_csv(std::list<std::string> csvData){
	std::list<std::string>::iterator it;
	int year, month, day;
	float value;

	it = _csvData.begin();
	if (*it != "date,exchange_rate"){
		return (false);
	}
	else
		*it++;
	for(int i = 0; it != _csvData.end(); i++){
		if (std::next(it) != csvData.end() && it->substr(0, 10) > std::next(it)->substr(0, 10)){
			if (i == _csvSize - 1){
				get_values(*it, &year, &month, &day, &value, "csv");
				std::cout << *it << std::endl;
				if (parse_date_csv(*it) == false || parse_values(year, month, day, value, "csv") == false){
					return (false);
				}
					break;
			}
			return (false);
		}
		get_values(*it, &year, &month, &day, &value, "csv");
		if (parse_date_csv(*it) == false || parse_values(year, month, day, value, "csv") == false){
			return (false);
		}
		it++;
	}
	return (true);
}

void BitcoinExchange::print_data(){
	std::list<std::string>::iterator it;
	std::list<std::string>::iterator itCvs;
	int year, month, day;
	float value;

	if (parse_csv(_csvData) == false){
		std::cout << "Error: cvs data corrupted." << std::endl;
		return;
	}
	it = _txtData.begin();
	itCvs = _csvData.begin();
	itCvs++;
	if (*it == "date | value")
		it++;
	while (it != _txtData.end())
	{
		if (parse_date_txt(*it) == false)
			std::cout << "Error: bad input => " + *it << std::endl;
		else
		{
			get_values(*it, &year, &month, &day, &value, "txt");
			if (value > 1000)
				std::cout << "Error: too large a number." << std::endl;
			else if (value < 0)
				std::cout << "Error: not a positive number." << std::endl;
			else if (parse_values(year, month, day, value, "txt") == true){
				while(itCvs != _csvData.end()){
					if (it->substr(0, 10) > itCvs->substr(0, 10))
						itCvs++;
					else{
					 	if (it->substr(0, 10) != itCvs->substr(0, 10))
							itCvs--;
						std::cout << it->substr(0,10) + " => " << value  << " = "
								<< value * std::strtod(itCvs->substr(11).c_str(), NULL) << std::endl;
						break;
					}
					if (itCvs == _csvData.end()){
						std::cout << it->substr(0, 10) + " => " << value  << " = "
								<< value * std::strtod(_csvData.back().substr(11).c_str(), NULL) <<  std::endl;
						break;
					}
				}
			}
			else
				std::cout << "Error: bad input => " + *it << std::endl;
			itCvs = _csvData.begin();
			itCvs++;
		}
		it++;
	}
}


void BitcoinExchange::get_data(){

	std::fstream csv("data.csv");
	std::fstream txt(_txtPath);
	std::string tmp;

	for(int i = 0; std::getline(csv, tmp); i++){
		_csvData.push_back(tmp);
		_csvSize = i;
	}
	while(std::getline(txt, tmp))
		_txtData.push_back(tmp);
}
