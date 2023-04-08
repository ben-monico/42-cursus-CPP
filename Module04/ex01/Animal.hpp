/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:40:11 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/07 20:55:05 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
# define ANIMAL_HPP_

# include <iostream>

class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(std::string name);
	Animal(Animal const &A);
	virtual ~Animal();
	Animal &operator=(Animal const &A);

	virtual void	makeSound() const;
	virtual std::string getType() const;
};



#endif // ANIMAL_HPP_