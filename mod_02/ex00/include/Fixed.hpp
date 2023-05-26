/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:46:48 by bgales            #+#    #+#             */
/*   Updated: 2023/05/26 18:15:37 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

/**
 * @file Fixed.hpp
 *
 * @brief Defines the Fixed class and related functions.
 */

/**
 * @class Fixed
 *
 * @brief Represents a fixed-point number with 8 fractional bits.
 */
class Fixed {
public:
    /**
     * @brief Default constructor for the Fixed class.
     */
    Fixed();

    /**
     * @brief Copy constructor for the Fixed class.
     *
     * @param a The Fixed object to be copied.
     */
    Fixed(const Fixed& a);

    /**
     * @brief Copy assignment operator for the Fixed class.
     *
     * @param a The Fixed object to be assigned.
     * @return A reference to the assigned Fixed object.
     */
    Fixed& operator=(const Fixed& a);

    /**
     * @brief Retrieves the raw value of the Fixed number.
     *
     * @return The raw value of the Fixed number.
     */
    int getRawBits() const;

    /**
     * @brief Sets the raw value of the Fixed number.
     *
     * @param raw The raw value to be set.
     */
    void setRawBits(int const raw);

    /**
     * @brief Destructor for the Fixed class.
     */
    ~Fixed();

private:
    int _nbr; /**< The raw value of the Fixed number. */
    const static int _fractBits = 8; /**< The number of fractional bits. */
};
