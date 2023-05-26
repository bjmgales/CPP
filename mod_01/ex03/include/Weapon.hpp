/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:01:48 by bgales            #+#    #+#             */
/*   Updated: 2023/05/26 18:06:44 by bgales           ###   ########.fr       */
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
 * @class Weapon
 *
 * @brief Represents a weapon with a specific type.
 */
class Weapon {
private:
    std::string _type; /**< The type of the weapon */

public:
    /**
     * @brief Parameterized constructor for the Weapon class.
     *
     * @param type The type of the weapon.
     */
    Weapon(std::string type);

    /**
     * @brief Destructor for the Weapon class.
     */
    ~Weapon();

    /**
     * @brief Returns the type of the weapon.
     *
     * @return The type of the weapon.
     */
    std::string getType();

    /**
     * @brief Sets the type of the weapon.
     *
     * @param type The type to set for the weapon.
     */
    void setType(std::string type);
};

#include "HumanA.hpp"
#include "HumanB.hpp"
