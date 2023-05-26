/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:23:06 by bgales            #+#    #+#             */
/*   Updated: 2023/05/26 18:12:30 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

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
     * @brief Outputs messages of the specified and above levels.
     *
     * @param level The level of the message ("DEBUG", "INFO", "WARNING", "ERROR").
     */
    void complain(std::string level);
};
