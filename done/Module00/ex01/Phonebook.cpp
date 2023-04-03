/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:28:49 by bcarreir          #+#    #+#             */
/*   Updated: 2023/03/23 16:34:45 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cctype>
#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	std::cout << "[Phonebook constructed]" << std::endl;
}

int Phonebook::_next_empty_index = 0;

Phonebook::~Phonebook(void)
{
	std::cout << "[Phonebook destructed]" << std::endl;
}


void	Phonebook::add(void)
{
	std::string str[5];
	int i;

	std::cout << "   Please type your first name: ";
	std::getline(std::cin, str[0]);
	std::cout << "   Please type your last name: ";
	std::getline(std::cin, str[1]);
	std::cout << "   Write your nickname: ";
	std::getline(std::cin, str[2]);
	std::cout << "   What's your phone number sexy? ";
	std::getline(std::cin, str[3]);
	std::cout << "   Share your darkest secret: ";
	std::getline(std::cin, str[4]);
	std::cout << "\n";
	
	for (i = 0; i < 5; i++)
	{
		if (str[i].empty())
		{
			std::cerr << "Error. Contacts can't have empty fields." << std::endl;
			return ;
		}
	}
	for (int k = 0; k < (int)str[3].size(); k++)
	{
		if (!isdigit(str[3][k]) && str[3][k] != '+' && str[3][k] != '-')
		{
			std::cerr << "Error. Phone numbers can only contain digits." << std::endl;
			return ;
		}
	}
	if (this->_next_empty_index == 8)
		this->_next_empty_index = 0;
	i = this->_next_empty_index++;
	this->_list[i].first_name = str[0];
	this->_list[i].last_name = str[1];
	this->_list[i].nickname = str[2];
	this->_list[i].phone_number = str[3];
	this->_list[i].secret = str[4];
	std::cout << "Contact successfully added." << std::endl;
}

void	Phonebook::_cout_info(std::string str) const
{
	int w = 0;

	if (str.size() < 10)
		w = 11 - str.size();
	std::cout << std::setw(w);
	for (int i = 0; i < (int)str.size(); i++)
	{
		if (i == 9 && str.size() > 10)
		{
			std::cout << ".";
			break ;
		}
		std::cout << str[i];
	}
}

void	Phonebook::_get_info(Contact cont, int i) const
{
	if (cont.first_name.empty())
		return ;
	std::cout << std::setw(9) << i << "|";
	_cout_info(cont.first_name);
	std::cout << "|";
	_cout_info(cont.last_name);
	std::cout << "|";
	_cout_info(cont.nickname);
	std::cout << std::endl;
}

void	Phonebook::search(void) const
{
	std::string ind;

	for (int i = 0; i < 8; i++)
		_get_info(this->_list[i], i);	
	std::cout << "Write the desired contact ind: ";
	std::getline(std::cin, ind);
	if (ind.size() != 1 || (ind.size() == 1 && ((ind[0] < '0' || ind[0] > '7') || \
		 this->_list[std::atoi(ind.c_str())].first_name.empty())))
	{
		std::cerr << "Error. index out of range." << std::endl;
		return ;
	}
	std::cout << this->_list[std::atoi(ind.c_str())].first_name << std::endl;
	std::cout << this->_list[std::atoi(ind.c_str())].last_name << std::endl;
	std::cout << this->_list[std::atoi(ind.c_str())].nickname << std::endl;
	std::cout << this->_list[std::atoi(ind.c_str())].phone_number << std::endl;
	std::cout << this->_list[std::atoi(ind.c_str())].secret << std::endl;
}
