/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:40:11 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/08 01:44:48 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP_
# define AANIMAL_HPP_

# include <iostream>

class AAnimal
{
protected:
	std::string type;

public:
	AAnimal();
	AAnimal(std::string name);
	AAnimal(AAnimal const &A);
	virtual ~AAnimal();
	AAnimal &operator=(AAnimal const &A);

	virtual void	makeSound() const = 0;
	virtual std::string getType() const = 0;
};



#endif // ANIMAL_HPP_