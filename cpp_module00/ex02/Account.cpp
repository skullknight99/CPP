/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acmaghou <acmaghou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:17:36 by acmaghou          #+#    #+#             */
/*   Updated: 2022/08/01 14:49:41 by acmaghou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Account.hpp"

Account::Account(int initial_deposit) {
	this->_amount = initial_deposit;
	this->_accountIndex = this->_nbAccounts;
	this->_totalAmount += this->_amount;
	this->_nbAccounts++;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
}

Account::~Account( void ) {
	this->_nbAccounts = 0;
	this->_totalAmount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_displayTimestamp();
	std::cout << " index: " << this->_accountIndex;
	std::cout << ";amount: " << this->_amount;
	std::cout << ";closed" << std::endl;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
	return (Account::_totalNbWithdrawals);
}

void	Account::_displayTimestamp() {
	static std::time_t	time_now = std::time(NULL);
	std::cout << std::put_time(std::localtime(&time_now), "[%y%m%d_%OH%OM%OS]");
}

void	Account::makeDeposit(int deposit) {
	if (deposit < 0)
		return;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	this->_displayTimestamp();
	std::cout << " index:"<<this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout <<";deposit:"<<deposit;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	std::cout << ";amount:" <<this->_amount;
	std::cout<< ";nb_deposits:" << this->_nbDeposits <<std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";p_amount:"<<this->_amount;
	std::cout << ";withdrawal:";
	if (withdrawal > this->_amount) {
		std::cout << "refused" << std::endl;
		return 0;
	}
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;
	this->_amount -= withdrawal;
	this->_totalAmount -= withdrawal;
	std::cout << withdrawal;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return 1;
}

void	Account::displayStatus(void) const {
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}
