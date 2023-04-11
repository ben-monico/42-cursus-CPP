/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 15:03:32 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/11 02:31:29 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

// Constructors
Character::Character() : ICharacter()
{
	std::cout << "\e[0;33mDefault Constructor called of Character \e[0m" << this->_name << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string name) : ICharacter(), _name(name)
{
	std::cout << "\e[0;33mParameterized Constructor called of Character \e[0m" << this->_name << std::endl;
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &copy) : ICharacter(copy)
{
	std::cout << "\e[0;33mCopy Constructor called of Character\e[0m" << std::endl;
}

// Destructor
Character::~Character()
{
	std::cout << "\e[0;31mDestructor called of Character \e[0m" << this->_name << std::endl;
	for (int i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];
	while (floor.front())
	{
		delete floor.front();
	}
}

// Operators
Character & Character::operator=(const Character &assign)
{
	std::cout << "\e[0;31mAO called of Character\e[0m" << std::endl;
	(void) assign;
	return *this;
}


void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if ((idx < 0 || idx > 3 ) && std::cerr << "Error: Slot out of range" << std::endl)
		return ;
	if ( _inventory[idx] == 0 && std::cerr << "Error: Slot is empty" << std::endl)
		return ;
	this->floor.push_front(_inventory[idx]);
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if ((idx < 0 || idx > 3 ) && std::cerr << "Error: Slot out of range" << std::endl)
		return ;
	if ( _inventory[idx] == 0 && std::cerr << "Error: Slot is empty" << std::endl)
		return ;
	_inventory[idx]->use(target);
}

std::string const & Character::getName() const { return this->_name; }