/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:45:13 by bgales            #+#    #+#             */
/*   Updated: 2023/05/28 13:33:54 by bgales           ###   ########.fr       */
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

/**
 * WrongAnimal Class
 * Represents a wrong animal with a type.
 * This class is used for comparison purposes.
 */
class WrongAnimal {
private:
    std::string _type; // Type of the wrong animal

public:
    /**
     * Default constructor.
     * Creates a WrongAnimal object with an empty type.
     */
    WrongAnimal();

    /**
     * Constructor.
     * Creates a WrongAnimal object with the specified type.
     * @param type The type of the wrong animal.
     */
    WrongAnimal(std::string type);

    /**
     * Destructor.
     * Cleans up the WrongAnimal object.
     */
    ~WrongAnimal();

    /**
     * Copy constructor.
     * Creates a WrongAnimal object by copying another WrongAnimal object.
     * @param other The WrongAnimal object to be copied.
     */
    WrongAnimal(const WrongAnimal& other);

    /**
     * Assignment operator.
     * Assigns the value of another WrongAnimal object to this WrongAnimal object.
     * @param other The WrongAnimal object to be assigned.
     * @return Reference to the assigned WrongAnimal object.
     */
    WrongAnimal& operator=(const WrongAnimal& other);

    /**
     * Get the type of the wrong animal.
     * @return The type of the wrong animal.
     */
    std::string getType() const;

    /**
     * Set the type of the wrong animal.
     * @param type The type of the wrong animal.
     */
    void setType(std::string type);

    /**
     * Make a wrong animal sound.
     */
    void makeSound() const;
};


#include "WrongCat.hpp"