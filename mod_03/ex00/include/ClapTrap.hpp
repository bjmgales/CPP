/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:21:29 by bgales            #+#    #+#             */
/*   Updated: 2023/07/08 10:16:05 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/**
 * @file ClapTrap.hpp
 *
 * @brief Defines the ClapTrap class and related functions.
 */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

/**
 * @class ClapTrap
 *
 * @brief Represents a ClapTrap character.
 */
class ClapTrap {
public:
    /**
     * @brief Default constructor for ClapTrap.
     */
    ClapTrap();

    /**
     * @brief Constructor for ClapTrap with a given name.
     *
     * @param name The name of the ClapTrap.
     */
    ClapTrap(std::string name);

    /**
     * @brief Copy constructor for ClapTrap.
     *
     * @param other The ClapTrap to be copied.
     */
    ClapTrap(const ClapTrap& other);

    /**
     * @brief Assignment operator for ClapTrap.
     *
     * @param other The ClapTrap to be assigned.
     * @return Reference to the ClapTrap after assignment.
     */
    ClapTrap& operator=(const ClapTrap& other);

    /**
     * @brief Destructor for ClapTrap.
     */
    ~ClapTrap();

    /**
     * @brief Attacks a target.
     *
     * @param target The target to be attacked.
     */
    void attack(const std::string& target);

    /**
     * @brief Takes damage.
     *
     * @param amount The amount of damage taken.
     */
    void takeDamage(unsigned int amount);

    /**
     * @brief Repairs the ClapTrap.
     *
     * @param amount The amount of health restored.
     */
    void beRepaired(unsigned int amount);

    /**
     * @brief Checks if the ClapTrap has enough energy to perform an action.
     *
     * @return True if the ClapTrap has enough energy, false otherwise.
     */
    bool energyCheck();

    /**
     * @brief Checks if the ClapTrap has any health left.
     *
     * @return True if the ClapTrap has health remaining, false otherwise.
     */
    bool healthCheck();

    /**
     * @brief Gets information about the ClapTrap.
     *
     * @param info The information to retrieve ("health", "energy", or "attack").
     * @return The requested information.
     */
    unsigned int getInfo(std::string info);

    /**
     * @brief Gets the name of the ClapTrap.
     *
     * @return The name of the ClapTrap.
     */
    std::string getName();

protected:
    std::string _name;          /*The name of the ClapTrap. */
    unsigned int _hitPoints;    /*The health points of the ClapTrap. */
    unsigned int _energyPoints; /*The energy points of the ClapTrap. */
    unsigned int _attackDamage; /*The attack damage of the ClapTrap. */
};

#endif /* CLAPTRAP_HPP */
