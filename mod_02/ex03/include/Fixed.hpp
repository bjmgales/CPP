/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 14:46:48 by bgales            #+#    #+#             */
/*   Updated: 2023/05/26 18:27:03 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>

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
private:
    int _nbr;
    const static int _fractBits = 8;

public:
    /**
     * @brief Default constructor for the Fixed class.
     */
    Fixed();

    /**
     * @brief Float constructor for the Fixed class.
     *
     * @param a The float value to be converted to Fixed.
     */
    Fixed(float a);

    /**
     * @brief Int constructor for the Fixed class.
     *
     * @param a The integer value to be converted to Fixed.
     */
    Fixed(const int a);

    /**
     * @brief Copy constructor for the Fixed class.
     *
     * @param a The Fixed object to be copied.
     */
    Fixed(const Fixed& a);

    /**
     * @brief Destructor for the Fixed class.
     */
    ~Fixed();

    /**
     * @brief Copy assignment operator for the Fixed class.
     *
     * @param a The Fixed object to be assigned.
     * @return A reference to the assigned Fixed object.
     */
    Fixed& operator=(const Fixed& a);

    /**
     * @brief Overloaded greater than operator.
     *
     * @param right The Fixed object to compare.
     * @return True if the current object is greater than the right object, false otherwise.
     */
    bool operator>(Fixed const& right);

    /**
     * @brief Overloaded less than operator.
     *
     * @param right The Fixed object to compare.
     * @return True if the current object is less than the right object, false otherwise.
     */
    bool operator<(const Fixed& right);

    /**
     * @brief Overloaded greater than or equal to operator.
     *
     * @param right The Fixed object to compare.
     * @return True if the current object is greater than or equal to the right object, false otherwise.
     */
    bool operator>=(const Fixed& right);

    /**
     * @brief Overloaded less than or equal to operator.
     *
     * @param right The Fixed object to compare.
     * @return True if the current object is less than or equal to the right object, false otherwise.
     */
    bool operator<=(const Fixed& right);

    /**
     * @brief Overloaded not equal to operator.
     *
     * @param right The Fixed object to compare.
     * @return True if the current object is not equal to the right object, false otherwise.
     */
    bool operator!=(const Fixed& right);

    /**
     * @brief Overloaded equal to operator.
     *
     * @param right The Fixed object to compare.
     * @return True if the current object is equal to the right object, false otherwise.
     */
    bool operator==(const Fixed& right);

    /**
     * @brief Overloaded addition operator.
     *
     * @param right The Fixed object to be added.
     * @return The result of the addition.
     */
    Fixed operator+(const Fixed& right);

    /**
     * @brief Overloaded subtraction operator.
     *
     * @param right The Fixed object to be subtracted.
     * @return The result of the subtraction.
     */
    Fixed operator-(const Fixed& right);

    /**
     * @brief Overloaded multiplication operator.
     *
     * @param right The Fixed object to be multiplied.
     * @return The result of the multiplication.
     */
    Fixed operator*(const Fixed& right);

    /**
     * @brief Overloaded division operator.
     *
     * @param right The Fixed object to be divided.
     * @return The result of the division.
     */
    Fixed operator/(const Fixed& right);

    /**
     * @brief Prefix increment operator.
     *
     * @return A reference to the incremented Fixed object.
     */
    Fixed& operator++();

    /**
     * @brief Postfix increment operator.
     *
     * @param int An unused parameter to differentiate the postfix operator.
     * @return A copy of the Fixed object before incrementing.
     */
    Fixed operator++(int);

    /**
     * @brief Prefix decrement operator.
     *
     * @return A reference to the decremented Fixed object.
     */
    Fixed& operator--();

    /**
     * @brief Postfix decrement operator.
     *
     * @param int An unused parameter to differentiate the postfix operator.
     * @return A copy of the Fixed object before decrementing.
     */
    Fixed operator--(int);

    /**
     * @brief Static function to get the minimum of two Fixed objects.
     *
     * @param a The first Fixed object.
     * @param b The second Fixed object.
     * @return The minimum of the two Fixed objects.
     */
    static Fixed min(const Fixed& a, const Fixed& b);

    /**
     * @brief Static function to get the maximum of two Fixed objects.
     *
     * @param a The first Fixed object.
     * @param b The second Fixed object.
     * @return The maximum of the two Fixed objects.
     */
    static Fixed max(const Fixed& a, const Fixed& b);

    /**
     * @brief Static function to get the minimum of two Fixed objects.
     *
     * @param a The first Fixed object.
     * @param b The second Fixed object.
     * @return The minimum of the two Fixed objects.
     */
    static Fixed min(Fixed& a, Fixed& b);

    /**
     * @brief Static function to get the maximum of two Fixed objects.
     *
     * @param a The first Fixed object.
     * @param b The second Fixed object.
     * @return The maximum of the two Fixed objects.
     */
    static Fixed max(Fixed& a, Fixed& b);

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
     * @brief Converts the Fixed number to a float value.
     *
     * @return The float representation of the Fixed number.
     */
    float toFloat() const;

    /**
     * @brief Converts the Fixed number to an integer value.
     *
     * @return The integer representation of the Fixed number.
     */
    int toInt() const;
};

/**
 * @brief Overloaded stream insertion operator to print the Fixed object.
 *
 * @param o The output stream.
 * @param obj The Fixed object to be printed.
 * @return The output stream.
 */
std::ostream& operator<<(std::ostream& o, Fixed const& obj);

