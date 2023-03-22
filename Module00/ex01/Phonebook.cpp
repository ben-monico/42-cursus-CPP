/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:28:49 by bcarreir          #+#    #+#             */
/*   Updated: 2023/03/22 18:57:48 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	std::cout << "Phonebook constructed" << std::endl;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Phonebook destructed" << std::endl;
}

int	Phonebook::empty_page(void)
{
	static int i;
	
	if (i == 8)
		i = 0;
	return (i++);
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
	for (int k = 0; k < str[3].size(); k++)
	{
		if (!isdigit(str[3][k]) && str[3][k] != '+')
		{
			std::cerr << "Error. Phone numbers can only contain digits." << std::endl;
			return ;
		}
	}
	i = this->empty_page();
	this->list[i].first_name = str[0];
	this->list[i].last_name = str[1];
	this->list[i].nickname = str[2];
	this->list[i].phone_number = str[3];
	this->list[i].secret = str[4];
	std::cout << "Contact successfully added." << std::endl;
}

void	Phonebook::put_info(std::string str)
{
	int w = 0;

	if (str.size() < 10)
		w = 10 - str.size();
	std::cout << std::setw(w);
	for (int i = 0; i < str.size(); i++)
	{
		if (i == 9 && str.size() > 9)
		{
			std::cout << ".";
			break ;
		}
		std::cout << str[i];
	}
}

void	Phonebook::get_info(Contact cont)
{
	put_info(cont.first_name);
	put_info(cont.last_name);
	put_info(cont.nickname);

}

void	Phonebook::search(void)
{
	std::string index;

	for (int i = 0; i < 8; i++)
		put_info(this->list[i]);	
	std::cout << "Write the desired contact index: ";
	std::getline(std::cin, index);
	if (index.size() != 1 || (index.size() == 1 && (index[0] < '0' || index[0] > '7')))
	{
		std::cerr << "Error. Index out of range." << std::endl;
		return ;
	}
	
}
