/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 01:57:19 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/11 17:47:54 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::~ICharacter()
{
	std::cout << "\e[0;31mDestructor called of ICharacter\e[0m" << std::endl;
}
