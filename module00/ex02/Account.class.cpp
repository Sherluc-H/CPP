/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhuang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 16:39:27 by lhuang            #+#    #+#             */
/*   Updated: 2020/02/10 18:56:06 by lhuang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>
#include <chrono>


static int Account::getNbAccounts(void)
{
	return (this->_nbAccounts);
}

static int Account::getTotalAmount(void)
{
	return (this->_totalAmount);
}

static int Account::getNbDeposits(void)
{
	return (this->_totalNbDeposits);
}

static int Account::getNbWithdrawals(void)
{
	return (this->_totalNbWithdrawals);
}

Account::Account(int initial_deposit)
{
	this->Account = this->Account();
	this->_accountIndex = _nbAccounts - 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

void makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposits:" << deposit << ";";
	this->_amount = this->_amount + deposit;
	std::cout << "amount:" << this->_amount << ";";
	this->_nbDeposits = this->_nbDeposits + 1;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (this->_amount >= withdrawal)
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount = this->_amount - withdrawal;
		std::cout << "amount:" << this->_amount << ";";
		this->_nbWithdrawals = this->_nbWithdrawals + 1;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	else
		std::cout << "withdrawal:refused" << std::endl;
}

int	checkAmount(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "accounts:" << this->_nbAccount << ";";
	std::cout << "total:" << this->_totalAmount << ";";
	std::cout << "deposits:" << this->_totalNbDeposits << ";";
	std::cout << "withdrawals:" << this->_totalNbWithdrawals << endl;
}

static void _displayTimestamp(void)
{
	std::time_t tt = system_clock::to_time_t (system_clock:now());
	struct std::tm *ptm = std::localtime(&tt);
	std::cout << "[" << std::put_time(ptm, "%G%m%e_%H%M%S") << "] ";

}

Account::Account()
{
	
}
