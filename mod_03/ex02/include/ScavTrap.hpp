/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:17:21 by bgales            #+#    #+#             */
/*   Updated: 2023/05/25 15:38:42 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/**
 * @file ScavTrap.hpp
 * @brief Defines the ScavTrap class, derived from ClapTrap.
 *

 * @class ScavTrap
 * @brief Represents a ScavTrap character, derived from ClapTrap.
 */
class ScavTrap : public ClapTrap {
public:
    /**
     * @brief Default constructor for ScavTrap.
     */
    ScavTrap();

    /**
     * @brief Constructor for ScavTrap with a given name.
     * @param name The name of the ScavTrap.
     */
    ScavTrap(std::string name);

    /**
     * @brief Copy constructor for ScavTrap.
     * @param other The ScavTrap object to be copied.
     */
    ScavTrap(const ScavTrap& other);

    /**
     * @brief Destructor for ScavTrap.
     */
    ~ScavTrap();

    /**
     * @brief Assignment operator for ScavTrap.
     * @param other The ScavTrap object to be assigned.
     * @return Reference to the assigned ScavTrap object.
     */
    ScavTrap& operator=(const ScavTrap& other);

    /**
     * @brief Enters Gate Keeper mode.
     */
    void guardGate();

    /**
     * @brief Attacks a target.
     * @param target The target to be attacked.
     */
    void attack(const std::string& target);
};
