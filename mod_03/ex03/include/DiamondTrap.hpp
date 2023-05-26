/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:17:21 by bgales            #+#    #+#             */
/*   Updated: 2023/05/25 15:38:42 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
/**
 * @file DiamondTrap.hpp
 * @brief Defines the DiamondTrap class, derived from ScavTrap and FragTrap.
 *
 * @class DiamondTrap
 * @brief Represents a DiamondTrap character, derived from ScavTrap and FragTrap.
 *
 * The DiamondTrap class inherits from both the ScavTrap and FragTrap classes, combining their functionalities
 * and characteristics to represent a DiamondTrap character.
 */
class DiamondTrap : public ScavTrap, public FragTrap {
public:
    /**
     * @brief Default constructor for DiamondTrap.
     *
     * This constructor creates a DiamondTrap object with default values for its attributes.
     */
    DiamondTrap();

	 /**
     * @brief Destructor for DiamondTrap.
     */
    ~DiamondTrap();

    /**
     * @brief Constructor for DiamondTrap with a given name.
     *
     * This constructor creates a DiamondTrap object with the specified name and default values for its attributes.
     *
     * @param name The name of the DiamondTrap.
     */
    DiamondTrap(std::string name);

    /**
     * @brief Copy constructor for DiamondTrap.
     *
     * This constructor creates a DiamondTrap object by copying another DiamondTrap object.
     *
     * @param other The DiamondTrap object to be copied.
     */
    DiamondTrap(const DiamondTrap& other);

    /**
     * @brief Assignment operator for DiamondTrap.
     *
     * This assignment operator assigns the attributes of another DiamondTrap object to the current object.
     *
     * @param other The DiamondTrap object to be assigned.
     * @return Reference to the assigned DiamondTrap object.
     */
    DiamondTrap& operator=(const DiamondTrap& other);

    /**
     * @brief Attacks a target.
     *
     * This function allows the DiamondTrap to attack a specified target, causing damage.
     *
     * @param target The target to be attacked.
     */
    void attack(const std::string& target);

    /**
     * @brief Requests the DiamondTrap to get in gate keeper mode.
     */
    void guardGate();

    /**
     * @brief Asks for a high five from other characters.
     *
     * This function is a friendly request for a high five from other characters.
     */
    void highFivesGuys();

    /**
     * @brief Displays the name of the DiamondTrap.
     *
     * This function displays the name of the DiamondTrap, including its subname.
     */
    void whoAmI();
private:
    std::string _name;
};