/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:40:11 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/05 17:43:08 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
# define ANIMAL_HPP_

# include <iostream>

class Animal
{
private:

protected:
	std::string type;

public:
	Animal(/* args */);
	Animal(Animal const &A);
	~Animal();
	Animal &operator=(Animal const &A);
};



#endif // ANIMAL_HPP_