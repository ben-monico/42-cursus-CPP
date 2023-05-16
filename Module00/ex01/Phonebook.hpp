/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:56:34 by bcarreir          #+#    #+#             */
/*   Updated: 2023/03/23 16:33:59 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>

class Phonebook {
	
private:

	Contact		_list[8];
	static int	_next_empty_index;
	void		_get_info(Contact cont, int i) const;
	void		_cout_info(std::string str) const;

public:

	Phonebook(void);
	~Phonebook(void);

	void		add();
	void		search() const;
};

#endif