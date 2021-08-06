/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 00:48:30 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/06 15:23:00 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;///
int Account::_totalAmount = 0;///
int Account::_totalNbDeposits = 0;///
int Account::_totalNbWithdrawals = 0;///

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    ++_nbAccounts;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created" << std::endl;
};

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed" << std::endl;
}

void    Account::_displayTimestamp(void)
{
    time_t      t = time(NULL);
    struct tm   *loc_t = localtime(&t);

    std::cout << "[" << loc_t->tm_year + 1900;
    std::cout << std::setw(2) << std::setfill('0') << loc_t->tm_mon + 1;
    std::cout << std::setw(2) << std::setfill('0') << loc_t->tm_mday << "_";
    std::cout << std::setw(2) << std::setfill('0') << loc_t->tm_hour ;
    std::cout << std::setw(2) << std::setfill('0') << loc_t->tm_min;
    std::cout << std::setw(2) << std::setfill('0') << loc_t->tm_sec << "] ";
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

int Account::checkAmount() const
{
    return (_amount);
}

void    Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposit:" << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void    Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposit:" << _nbDeposits << ";";
	std::cout << "wtihdrawals:" << _nbWithdrawals << std::endl;
}

void    Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << _amount + deposit << ";";
    std::cout << "nb_deposits:" << _nbDeposits + 1 << std::endl;
    _amount += deposit;
    _nbDeposits += 1;
    _totalNbDeposits += 1;
    _totalAmount += deposit;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "withdrawal:";
    if (withdrawal > _amount)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    std::cout << withdrawal << ";";
    std::cout << "amount:" << _amount - withdrawal << ";";
    std::cout << "nb_withdrawals:" << _nbWithdrawals + 1 << std::endl;
    _amount -= withdrawal;
    _nbWithdrawals += 1;
    _totalNbWithdrawals += 1;
    _totalAmount -= withdrawal;
    return (true);
}
