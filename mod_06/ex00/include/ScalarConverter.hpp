/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:00:28 by bgales            #+#    #+#             */
/*   Updated: 2023/09/29 16:56:11 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#pragma once
#include "parsing.hpp"
#include <cstdlib>
#include <cerrno>
#include <stdint.h>

#define R   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BR     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */


class ScalarConverter{
	private:
		ScalarConverter(){};
		ScalarConverter(const ScalarConverter &){};
		ScalarConverter& operator = (const ScalarConverter &);
		~ScalarConverter(){};

	public:
		static void	convert(std::string rep);
		static void fromInt(std::string rep);
		static void fromChar(std::string rep);
		static void fromFloat(std::string rep);
		static void fromDouble(std::string rep);
		static void specialCases(std::string rep);
};
