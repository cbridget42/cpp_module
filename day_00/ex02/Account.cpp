/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbridget <cbridget@student-21school.ru>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:50:12 by cbridget          #+#    #+#             */
/*   Updated: 2022/07/26 22:18:07 by cbridget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include "iostream"
#include "iomanip"
#include "ctime"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) {
//	static int index = 0;
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::~Account(void) {
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount \
	<< ";closed\n";
}

int Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int Account::getTotalAmount( void ) {
	return _totalAmount;
}

int Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() << ";total:" << getTotalAmount() \
	<< ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << '\n';
}

void Account::displayStatus(void) const {
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount \
	<< ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << '\n';
}

void Account::makeDeposit( int deposit ) {
	Account::_displayTimestamp();
	_nbDeposits += 1;
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount \
	<< ";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" \
	<< _nbDeposits << '\n';
	_amount += deposit;
	_totalNbDeposits += 1;
	_totalAmount += deposit;
}

bool Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount;
	if (_amount < withdrawal) {
		std::cout << ";withdrawal:refused\n";
		return false;
	}
	else {
		_amount -= withdrawal;
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		_totalAmount -= withdrawal;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << _amount \
		<< ";nb_withdrawals:" << _nbWithdrawals << '\n';
		return true;
	}
}

void Account::_displayTimestamp(void) {
	std::time_t t = std::time(0);
	std::tm *now = std::localtime(&t);
	std::cout << '[' << (now->tm_year + 1900) << std::setw(2) << std::setfill('0') \
	<< (now->tm_mon + 1) << std::setw(2) << now->tm_mday << '_';
	std::cout << std::setw(2) << std::setfill('0') << now->tm_hour << std::setw(2) \
	<< std::setfill('0') << now->tm_min << std::setw(2) << std::setfill('0') \
	<< now->tm_sec << ']';
}
