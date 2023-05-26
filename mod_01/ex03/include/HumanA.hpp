/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:01:48 by bgales            #+#    #+#             */
/*   Updated: 2023/05/26 18:05:16 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

/**
 * @file HumanA.hpp
 *
 * @brief Defines the HumanA class and related functions.
 */

class Weapon; // Forward declaration of the Weapon class

/**
 * @class HumanA
 *
 * @brief Represents a human with a specific weapon.
 */
class HumanA {
private:
    std::string _name; /**< The name of the human */
    Weapon& _weapon; /**< Reference to the human's weapon */

public:
    /**
     * @brief Parameterized constructor for the HumanA class.
     *
     * @param name The name of the human.
     * @param club Reference to the human's weapon.
     */
    HumanA(std::string name, Weapon& club);

    /**
     * @brief Destructor for the HumanA class.
     */
    ~HumanA();

    /**
     * @brief Attacks using the human's weapon.
     */
    void attack();
};