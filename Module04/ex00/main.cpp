/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 19:27:46 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/07 20:47:15 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog("Bolinhas");
	const Animal* i = new Cat();
	const Animal* k = new Animal("Gilberto");
	const WrongAnimal* wa = new WrongCat();
	
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << wa->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound(); 
	meta->makeSound();
	k->makeSound();
	//REEEEEEEEEEEEE
	wa->makeSound();
	
	delete meta;
	delete i;
	delete j;
	delete k;
	delete wa;
	return 0;
}