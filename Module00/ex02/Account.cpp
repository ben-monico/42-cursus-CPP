/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:18:14 by bcarreir          #+#    #+#             */
/*   Updated: 2023/03/23 19:18:53 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

Account::Account()
{
	std::cout << "[Account constructed]" << std::endl;
}


Account::Account(int initial_deposit)
{
	std::cout << "[Account constructed]" << std::endl;
}

Account::~Account()
{
	std::cout << "[Account constructed]" << std::endl;
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

// int	Account::getNbAccounts( void )
// {
	
// }
// int	Account::getTotalAmount( void )
// {
	
// }
// int	Account::getNbDeposits( void )
// {
	
// }
// int	Account::getNbWithdrawals( void )
// {
	
// }

// void	Account::makeDeposit( int deposit )
// {
	
// }
// bool	Account::makeWithdrawal( int withdrawal )
// {
	
// }
int		Account::checkAmount( void ) const
{
	return this->_amount;
}
void	Account::displayStatus( void ) const
{
	std::cout << "created";
}
void Account::_displayTimestamp( void )
{

	time_t now = time(0);
	tm *time = localtime(&now);

	std::cout << "[" << 1900 + time->tm_year;
	if (time->tm_mon < 9)
		std::cout << "0";
	std::cout << 1 + time->tm_mon << time->tm_mday;
	std::cout << "_" << time->tm_hour << time->tm_min << time->tm_sec << "] ";
}
