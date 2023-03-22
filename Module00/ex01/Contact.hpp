/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:57:47 by bcarreir          #+#    #+#             */
/*   Updated: 2023/03/22 16:20:42 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
	
private:

public:
	std::string first_name;
	std::string last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	secret;

	Contact(void);
	~Contact(void);
	
};

#endif