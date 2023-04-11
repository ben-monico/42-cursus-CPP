/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 19:27:46 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/11 18:02:06 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	AAnimal *rafeiro = new Dog;
	Cat pantufa("pantufa");
	Dog bolinhas("bolinhas");

	rafeiro->getType();
	rafeiro->makeSound();
	
	pantufa.getType();
	pantufa.makeSound();

	bolinhas.getType();
	bolinhas.makeSound();

	delete rafeiro;
}