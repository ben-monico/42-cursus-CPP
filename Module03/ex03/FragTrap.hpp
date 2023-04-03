/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 19:11:40 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/03 19:33:09 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CPP_
# define FRAGTRAP_CPP_

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	std::string _name;

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &S);
	~FragTrap();
	void operator=(const FragTrap &c);
	void highFivesGuys(void);
};

#endif // FRAGTRAP_CPP_