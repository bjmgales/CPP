/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:27:49 by bgales            #+#    #+#             */
/*   Updated: 2023/05/17 12:55:24 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Phonebook.hpp"

/**
 * @class Contact
 * @brief Represents a contact with various information fields.
 *
 * The Contact class stores information about a contact, including the first name, last name,
 * nickname, phone number, and darkest secret.
 */
class Contact
{
private:
    std::string _first_name;     // The first name of the contact.
    std::string _last_name;      // The last name of the contact.
    std::string _nickname;       // The nickname of the contact.
    std::string _phone_number;   // The phone number of the contact.
    std::string _secret;         // The darkest secret of the contact.

public:
    /**
     * @brief Default constructor for the Contact class.
     */
    Contact();

    /**
     * @brief Destructor for the Contact class.
     */
    ~Contact();

    /**
     * @brief Get information about the contact.
     *
     * This function retrieves the information of the contact based on the provided name.
     *
     * @param name The name of the information to retrieve.
     * @return The requested information as a string. Returns an empty string if the name is not found.
     */
    std::string get_info(std::string name);

    /**
     * @brief Set information for the contact.
     *
     * This function prompts the user to enter the contact's first name, last name,
     * nickname, phone number, and darkest secret.
     * It stores the entered information in the respective member variables of the contact.
     */
    void set_info();
};
