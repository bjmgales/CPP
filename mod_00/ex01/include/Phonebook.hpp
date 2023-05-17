/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:29:06 by bgales            #+#    #+#             */
/*   Updated: 2023/05/17 12:58:18 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>
#include <string.h>
#include "Contact.hpp"


/**
 * @class Phonebook
 * @brief Represents a phonebook with contacts.
 *
 * The Phonebook class manages a list of contacts and provides functions to interact with them.
 */
class Phonebook {
private:
    int _contact_nbr;     ///< The number of contacts in the phonebook.
public:
    /**
     * @brief Default constructor for the Phonebook class.
     */
    Phonebook();

    /**
     * @brief Destructor for the Phonebook class.
     */
    ~Phonebook();

    /**
     * @brief Increase the contact number if it is less than 8.
     *
     * This function increments the contact number by 1 if it is less than 8.
     * It is used to manage the maximum number of contacts in the phonebook.
     */
    void increase_contact();

    /**
     * @brief Display all contacts.
     *
     * This function displays all the stored contacts' details.
     * If there are no contacts, it displays a message indicating there are no contacts to be displayed.
     * It displays the index, first name, last name, and nickname of each contact in a tabular format.
     * After displaying the contact details, it calls the `ask_index` function to prompt the user
     * for the contact index to be displayed in detail.
     */
    void display_all();

    /**
     * @brief Prompt the user for the contact index to be displayed.
     *
     * This function prompts the user to enter the index of the contact to be displayed.
     * The user can also enter "RETURN" to return to the main menu.
     * It keeps prompting until a valid contact index or "RETURN" is entered.
     */
    void ask_index();

    /**
     * @brief Display the details of a specific contact.
     *
     * This function displays the details of the contact at the specified index.
     * It prompts the user to enter the index of the contact to display and shows
     * the contact's first name, last name, nickname, phone number, and darkest secret.
     * After displaying the contact's details, it waits for user input to continue and then
     * displays the list of all contacts.
     *
     * @param input The index of the contact to display as a string.
     * @return Returns 0 if the contact index is valid and displayed successfully, 1 otherwise.
     */
    int display_one(std::string input);

    Contact list[9];    ///< An array to store the contacts in the phonebook.
};

/**
 * @brief Check the length of a string and print it in a formatted manner.
 *
 * This function checks the length of the input string. If the length is greater than 10,
 * it prints the first 9 characters of the string followed by an ellipsis (...) to indicate truncation.
 * If the length is 10 or less, it prints the string as is.
 * The formatted string is then printed with a "|" character at the end.
 *
 * @param str The input string to check and print.
 */
void length_check(std::string str);
