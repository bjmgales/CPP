/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 13:51:48 by bgales            #+#    #+#             */
/*   Updated: 2023/05/14 18:07:01 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit):_accountIndex(++_nbAccounts - 1){
	_displayTimestamp();
	std::cout <<" index:" << _accountIndex++ << ";amount:"
		<< initial_deposit << ";created" << std::endl;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

Account::~Account(){
	_displayTimestamp();
	std::cout << " index:" << _accountIndex - 1 << ";amount:" << _amount << ";closed" << std::endl;
}

void displayP_amount(int p_amount){
	std::cout << "p_amount:" << p_amount << ";";
	return;
}

int Account::getNbAccounts()
{
	return (_nbAccounts);
}

int Account::getTotalAmount()
{
	return (_totalAmount);
}

int Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void Account::_displayTimestamp()
{
	std::time_t t = std::time(nullptr);
	std::tm* time = std::localtime(&t);
	char timestamp[18];
	std::strftime(timestamp, sizeof(timestamp), "[%Y%m%d_%H%M%S]", time);
	std::cout << timestamp;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";"<< "total:" << _totalAmount << ";"
	<< "deposits:" << _totalNbDeposits << ";" << "withdrawals:" << _totalNbWithdrawals << std::endl;
	// recap();
	// std::cout << "index:" << _accountIndex << ";amount:" << _amount <<
	// 	";deposits:" << _nbDeposits << ";witdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex - 1<< ";";
	displayP_amount(_amount);
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	std::cout << "deposit:" << deposit << ";amount:"
		<< _amount << ";nb_deposits:" << _nbDeposits << std::endl;
	_totalNbDeposits++;
}

int Account::checkAmount() const
{
	return(_amount);
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex - 1<< ";";
	displayP_amount(_amount);
	if (withdrawal > checkAmount())
	{
		std::cout << "withrdawal:refused" << std::endl;
		return false;
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	std::cout << "withdrawal:" << withdrawal << ";amount:"
		<< _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	_totalNbWithdrawals++;
	return true;
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex - 1 << ";amount:" << _amount <<
		";deposits:" << _nbDeposits << ";witdrawals:" << _nbWithdrawals << std::endl;

}