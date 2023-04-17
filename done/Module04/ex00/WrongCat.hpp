/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 19:28:58 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/07 20:44:31 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP_
# define WRONGCAT_HPP_

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(std::string type);
	WrongCat(WrongCat const &C);
	~WrongCat();
	WrongCat &operator =(WrongCat const &C);

	void makeSound() const;
	std::string getType() const;
};



#endif // WRONGCAT_HPP_