/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:17:21 by bgales            #+#    #+#             */
/*   Updated: 2023/05/25 15:38:42 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
/**
 * @file FragTrap.hpp
 * @brief Defines the FragTrap class, derived from ClapTrap.
 *
 * @class FragTrap
 * @brief Represents a FragTrap character, derived from ClapTrap.
 *
 * The FragTrap class inherits from the ClapTrap class and adds specific functionalities
 * and characteristics of a FragTrap character.
 */

class FragTrap : virtual public ClapTrap {
public:
    /**
     * @brief Default constructor for FragTrap.
     *
     * This constructor creates a FragTrap object with default values for its attributes.
     */
    FragTrap();

    /**
     * @brief Constructor for FragTrap with a given name.
     *
     * This constructor creates a FragTrap object with the specified name and default values for its attributes.
     *
     * @param name The name of the FragTrap.
     */
    FragTrap(std::string name);

    /**
     * @brief Copy constructor for FragTrap.
     *
     * This constructor creates a FragTrap object by copying another FragTrap object.
     *
     * @param other The FragTrap object to be copied.
     */
    FragTrap(const FragTrap& other);

    /**
     * @brief Destructor for FragTrap.
     *
     * The destructor is responsible for properly cleaning up the FragTrap object.
     */
    ~FragTrap();

    /**
     * @brief Assignment operator for FragTrap.
     *
     * This assignment operator assigns the attributes of another FragTrap object to the current object.
     *
     * @param other The FragTrap object to be assigned.
     * @return Reference to the assigned FragTrap object.
     */
    FragTrap& operator=(const FragTrap& other);

    /**
     * @brief Attacks a target.
     *
     * This function allows the FragTrap to attack a specified target, causing damage.
     *
     * @param target The target to be attacked.
     */
    void attack(const std::string& target);

    /**
     * @brief Asks for a high five from other characters.
     *
     * This function is a friendly request for a high five from other characters.
     */
    void highFivesGuys();
};

