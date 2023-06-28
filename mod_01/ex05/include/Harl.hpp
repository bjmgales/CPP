/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:23:06 by bgales            #+#    #+#             */
/*   Updated: 2023/06/28 11:14:20 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

/**
 * @file Harl.hpp
 *
 * @brief Defines the Harl class and related functions.
 */

/**
 * @class Harl
 *
 * @brief Represents a Harl object that can output different types of messages.
 */
class Harl {
private:
    void debug(); /**< Outputs a debug message. */
    void info(); /**< Outputs an info message. */
    void warning(); /**< Outputs a warning message. */
    void error(); /**< Outputs an error message. */

public:
    /**
     * @brief Default constructor for the Harl class.
     */
    Harl();

    /**
     * @brief Destructor for the Harl class.
     */
    ~Harl();

    /**
     * @brief Array of function pointers to different message functions.
     */
    void (Harl::*functptr[4])();

    /**
     * @brief Outputs a message of the specified level.
     *
     * @param level The level of the message ("DEBUG", "INFO", "WARNING", "ERROR").
     */
    void complain(std::string level);
};
