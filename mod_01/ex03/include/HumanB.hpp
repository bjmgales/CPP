/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 19:01:48 by bgales            #+#    #+#             */
/*   Updated: 2023/05/26 18:05:51 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"
#include <iostream>


/**
 * @class HumanB
 *
 * @brief Represents a human with an optional weapon.
 */
class HumanB {
private:
    std::string _name; /**< The name of the human */
    Weapon* _weapon; /**< Pointer to the human's weapon */

public:
    /**
     * @brief Parameterized constructor for the HumanB class.
     *
     * @param name The name of the human.
     */
    HumanB(std::string name);

    /**
     * @brief Destructor for the HumanB class.
     */
    ~HumanB();

    /**
     * @brief Attacks using the human's weapon.
     */
    void attack();

    /**
     * @brief Sets the weapon for the human.
     *
     * @param club Reference to the weapon to be set.
     */
    void setWeapon(Weapon& club);
};
