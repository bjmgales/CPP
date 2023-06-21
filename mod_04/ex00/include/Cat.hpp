/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:45:13 by bgales            #+#    #+#             */
/*   Updated: 2023/05/29 10:56:29 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

/**
 * Cat Class
 * Represents a cat, which is a specific type of Animal.
 */
class Cat : public Animal {
public:
    /**
     * Default constructor.
     * Creates a Cat object with the default type "Cat".
     */
    Cat();

    /**
     * Destructor.
     * Cleans up the Cat object.
     */
    ~Cat();

    /**
     * Copy constructor.
     * Creates a Cat object by copying another Cat object.
     * @param other The Cat object to be copied.
     */
    Cat(const Cat& other);

    /**
     * Assignment operator.
     * Assigns the value of another Cat object to this Cat object.
     * @param other The Cat object to be assigned.
     * @return Reference to the assigned Cat object.
     */
    Cat& operator=(const Cat& other);

    /**
     * Make a cat sound.
     */
    void makeSound() const;
};
