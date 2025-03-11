/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncharbog <ncharbog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 11:27:10 by ncharbog          #+#    #+#             */
/*   Updated: 2025/03/11 10:52:48 by ncharbog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;

int	Account::_totalAmount = 0;

int	Account::_totalNbDeposits = 0;

int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit){
	this->_accountIndex = this->_nbAccounts++;
	this->_nbDeposits = 0;
	this->_amount = initial_deposit;
	this->_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void){
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
	_nbAccounts--;
}

int	Account::getNbAccounts(void){
	return (_nbAccounts);
}

int	Account::getTotalAmount(void){
	return (_totalAmount);
}

int	Account::getNbDeposits(void){
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void){
	return (_totalNbWithdrawals);
}

int	Account::checkAmount(void) const{
	return (_amount);
}

void	Account::makeDeposit(int deposit){
	_totalNbDeposits++;
	_nbDeposits++;
	_totalAmount += deposit;
	_amount += deposit;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << (_amount - deposit) << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal){
	_displayTimestamp();
	if (withdrawal > _amount){
		std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
	else{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		_amount -= withdrawal;
		std::cout << " index:" << _accountIndex << ";p_amount:" << (_amount + withdrawal) << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (true);
	}
}

void	Account::displayAccountsInfos(void){
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void){
	std::time_t	t = std::time(0);
	std::tm	*now = std::localtime(&t);

	std::cout << "[";
	std::cout << std::setw(4) << std::setfill('0') << (now->tm_year + 1900);
	std::cout << std::setw(2) << std::setfill('0') << now->tm_mday;
	std::cout << std::setw(2) << std::setfill('0') << (now->tm_mon + 1);
	std::cout << "_";
	std::cout << std::setw(2) << std::setfill('0') << now->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << now->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << now->tm_sec;
	std::cout << "]";
}
