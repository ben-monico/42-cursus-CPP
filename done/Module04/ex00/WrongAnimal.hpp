/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:40:11 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/07 20:44:26 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP_
# define WRONGANIMAL_HPP_

# include <iostream>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const &A);
	virtual ~WrongAnimal();
	WrongAnimal &operator=(WrongAnimal const &A);

	void	makeSound() const;
	std::string getType() const;
};



#endif // WRONGANIMAL_HPP_