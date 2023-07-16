/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:45:13 by bgales            #+#    #+#             */
/*   Updated: 2023/07/10 12:32:05 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

/**
 * Dog Class
 * Represents a dog, which is a specific type of Animal.
 */
class Dog : public Animal {
public:
    /**
     * Default constructor.
     * Creates a Dog object with the default type "Dog".
     */
    Dog();

    /**
     * Destructor.
     * Cleans up the Dog object.
     */
    ~Dog();

    /**
     * Copy constructor.
     * Creates a Dog object by copying another Dog object.
     * @param other The Dog object to be copied.
     */
    Dog(const Dog& other);

    /**
     * Assignment operator.
     * Assigns the value of another Dog object to this Dog object.
     * @param other The Dog object to be assigned.
     * @return Reference to the assigned Dog object.
     */
    Dog& operator=(const Dog& other);

    /**
     * Make a dog sound.
     */
    void makeSound() const;
};
