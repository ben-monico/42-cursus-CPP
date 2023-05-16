/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 19:28:58 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/07 20:55:06 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP_
# define CAT_HPP_

# include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(std::string name);
	Cat(Cat const &C);
	~Cat();
	Cat &operator =(Cat const &C);

	virtual void makeSound() const;
	virtual std::string getType() const;
};



#endif // CAT_HPP_