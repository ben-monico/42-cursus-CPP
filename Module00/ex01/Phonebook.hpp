/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:56:34 by bcarreir          #+#    #+#             */
/*   Updated: 2023/03/22 18:56:37 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook {
	
private:

public:
	Contact	list[8];
	void	add();
	void	search();
	int		empty_page();
	void	get_info(Contact cont);
	void	Phonebook::put_info(std::string str);
	
	Phonebook(void);
	~Phonebook(void);
};

#endif