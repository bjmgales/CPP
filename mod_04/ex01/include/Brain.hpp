/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:29:47 by bgales            #+#    #+#             */
/*   Updated: 2023/07/10 13:37:20 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

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

class Brain {
	public:
		/**
		 * Default constructor for the Brain class.
		 */
		Brain();

		/**
		 * Destructor for the Brain class.
		 */
		~Brain();

		/**
		 * Copy constructor for the Brain class.
		 *
		 * @param other The Brain object to be copied.
		 */
		Brain(const Brain& other);

		/**
		 * Assignment operator for the Brain class.
		 *
		 * @param other The Brain object to be assigned.
		 * @return A reference to the assigned Brain object.
		 */
		Brain& operator=(const Brain& other);
	private:
		/**
		 * An array of strings representing ideas.
		 */
		std::string ideas[101];
};
