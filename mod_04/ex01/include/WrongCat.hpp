/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:45:13 by bgales            #+#    #+#             */
/*   Updated: 2023/05/28 13:35:56 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "WrongAnimal.hpp"

/**
 * WrongCat Class
 * Represents a wrong cat, which is a specific type of WrongAnimal.
 */
class WrongCat : public WrongAnimal {
public:
    /**
     * Default constructor.
     * Creates a WrongCat object with the default type "WrongCat".
     */
    WrongCat();

    /**
     * Destructor.
     * Cleans up the WrongCat object.
     */
    ~WrongCat();

    /**
     * Copy constructor.
     * Creates a WrongCat object by copying another WrongCat object.
     * @param other The WrongCat object to be copied.
     */
    WrongCat(const WrongCat& other);

    /**
     * Assignment operator.
     * Assigns the value of another WrongCat object to this WrongCat object.
     * @param other The WrongCat object to be assigned.
     * @return Reference to the assigned WrongCat object.
     */
    WrongCat& operator=(const WrongCat& other);

    /**
     * Make a wrong cat sound.
     */
    void makeSound() const;
};
