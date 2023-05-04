/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:48:31 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/27 18:07:56 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main ()
{
	Data *data = new Data;
	data->n = 423;
	data->s1 = "Badgelgeh";
	
	uintptr_t raw = Serializer::serialize(data);
	
	std::cout << data << std::endl;
	
	std::cout << raw << std::endl;
	
	std::cout << Serializer::deserialize(raw) << std::endl;
	
	std::cout << data->n << " " << data->s1 << std::endl;
	
	delete data;
}