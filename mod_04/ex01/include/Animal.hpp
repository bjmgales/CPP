/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:45:13 by bgales            #+#    #+#             */
/*   Updated: 2023/07/10 13:24:27 by bgales           ###   ########.fr       */
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
 * Animal Class
 * Represents an animal with a type.
 */
class Animal {
private:
    std::string _type; // Type of the animal

public:
    /**
     * Default constructor.
     * Creates an Animal object with an empty type.
     */
    Animal();

    /**
     * Constructor.
     * Creates an Animal object with the specified type.
     * @param type The type of the animal.
     */
    Animal(std::string type);

    /**
     * Destructor.
     * Cleans up the Animal object.
     */
    virtual ~Animal();

    /**
     * Copy constructor.
     * Creates an Animal object by copying another Animal object.
     * @param other The Animal object to be copied.
     */
    Animal(const Animal& other);

    /**
     * Assignment operator.
     * Assigns the value of another Animal object to this Animal object.
     * @param other The Animal object to be assigned.
     * @return Reference to the assigned Animal object.
     */
    Animal& operator=(const Animal& other);

    /**
     * Get the type of the animal.
     * @return The type of the animal.
     */
    std::string getType() const;

    /**
     * Set the type of the animal.
     * @param type The type of the animal.
     */
    void setType(std::string type);

    /**
     * Make a sound specific to the animal.
     */
    void virtual makeSound() const;
};


#include "Dog.hpp"
#include "Cat.hpp"