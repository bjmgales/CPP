// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //


#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //
#include <ctime>
#include <iostream>

/**
 * @class Account
 * @brief Represents a bank account.
 *
 * The Account class manages individual bank accounts and provides functions to interact with them.
 */
class Account{
private:
    static int _nbAccounts;              // The total number of accounts.
    static int _totalAmount;             // The total amount of money in all accounts.
    static int _totalNbDeposits;         // The total number of deposits made across all accounts.
    static int _totalNbWithdrawals;      // The total number of withdrawals made across all accounts.
    int 		_accountIndex;           // The index of the current account.
    int 		_amount;                 // The current amount of money in the account.
    int			_nbDeposits;             // The number of deposits made for the account.
    int 		_nbWithdrawals;          // The number of withdrawals made for the account.
    /**
     * @brief Display the timestamp.
     *
     * This function displays the current timestamp in the format "[YYYYMMDD_HHMMSS]".
     */
    static void _displayTimestamp();

public:

	typedef Account		t;
    /**
     * @brief Constructor for the Account class.
     *
     * Creates a new account with the specified initial deposit amount.
     * It increments the account index, sets the amount, and updates the total amount and number of accounts.
     *
     * @param initial_deposit The initial deposit amount for the account.
     */
    Account(int initial_deposit);

    /**
     * @brief Destructor for the Account class.
     *
     * Displays the account details before closing the account.
     */
    ~Account();

    /**
     * @brief Get the total number of accounts.
     *
     * This function returns the total number of accounts created.
     *
     * @return The total number of accounts.
     */
    static int getNbAccounts();

    /**
     * @brief Get the total amount of money in all accounts.
     *
     * This function returns the total amount of money present in all the accounts.
     *
     * @return The total amount of money in all accounts.
     */
    static int getTotalAmount();

    /**
     * @brief Get the total number of deposits made across all accounts.
     *
     * This function returns the total number of deposits made across all the accounts.
     *
     * @return The total number of deposits made.
     */
    static int getNbDeposits();

    /**
     * @brief Get the total number of withdrawals made across all accounts.
     *
     * This function returns the total number of withdrawals made across all the accounts.
     *
     * @return The total number of withdrawals made.
     */
    static int getNbWithdrawals();


    /**
     * @brief Display information about all accounts.
     *
     * This function displays the total number of accounts, the total amount of money in all accounts,
     * the total number of deposits made, and the total number of withdrawals made.
     */
    static void displayAccountsInfos();

    /**
     * @brief Make a deposit to the account.
     *
     * This function makes a deposit to the account by increasing the amount.
     * It updates the total amount, the number of deposits, and displays the deposit details.
     *
     * @param deposit The amount to deposit.
     */
    void makeDeposit(int deposit);

	/**
 	* @brief Display the status of the account.
 	*
 	* This function displays the current status of the account, including its index, amount,
 	* the number of deposits made, and the number of withdrawals made.
 	* It uses the `_displayTimestamp` function to print the current timestamp before displaying the status.
 	*/
	void displayStatus() const;

	/**
 	* @brief Check the current amount of the account.
 	*
 	* This function returns the current amount stored in the account.
 	*
 	* @return The current amount of the account as an integer.
 	*/
	int checkAmount() const;

	/**
 	* @brief Make a withdrawal from the account.
	 	* This function allows withdrawing a specified amount from the account balance.
	 	* It checks if the withdrawal amount is greater than the current account balance.
 	* If the withdrawal amount exceeds the account balance, the withdrawal is refused
 	* and a corresponding message is printed. Otherwise, the withdrawal is processed.
 	* The account balance and withdrawal statistics are updated, and a success message
	 * including the withdrawn amount, new account balance, and number of withdrawals
 	* is printed.
 	*
 	* @param withdrawal The amount to withdraw from the account.
 	* @return True if the withdrawal is successful, False if the withdrawal is refused.
 	*/
	bool makeWithdrawal(int withdrawal);
};

 /**
     * @brief Display the amount as "p_amount".
     *
     * This function prints the provided amount preceded by the string "p_amount:".
     *
     * @param p_amount The amount to display.
     */
    void displayP_amount(int p_amount);

// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //


#endif /* __ACCOUNT_H__ */
