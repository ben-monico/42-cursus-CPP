/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 23:26:00 by bcarreir          #+#    #+#             */
/*   Updated: 2023/03/29 02:08:06 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void Harl::debug( void )
{
	std::cout << "DEBUG I love having extra bacon for my burger. I really do!" << std::endl;
	
}
void Harl::info( void )
{
	std::cout << "INFO I cannot believe adding extra bacon costs more money. You didn’t put" \
	"enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	
}
void Harl::warning( void )
{
	std::cout << "WARNING I think I deserve to have some extra bacon for free. I’ve been coming" \
	"for years whereas you started working here since last month." << std::endl;
	
}
void Harl::error( void )
{
	std::cout << "ERROR This is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::complain( std::string level )
{
	void (Harl::*funcptr[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (level == str[i])
			(this->*funcptr[i])();
}