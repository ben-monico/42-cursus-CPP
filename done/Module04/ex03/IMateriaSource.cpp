/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 16:29:33 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/11 17:48:35 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::~IMateriaSource()
{
	std::cout << "\e[0;31mDestructor called of IMateriaSource\e[0m" << std::endl;
}
