/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 23:42:24 by bcarreir          #+#    #+#             */
/*   Updated: 2023/05/11 01:27:02 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <map>

class BitcoinExchange
{
	public:
		// Constructors
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		
		// Destructor
		~BitcoinExchange();
		
		// Operators
		BitcoinExchange & operator=(const BitcoinExchange &assign);

		static void exchange(std::string);
		
	private:
		static std::map<std::string, float> _db;
		static std::string _date;
		static float _value;
		static float _valueExchanged;
		
		static void extract_db();
		static void input_handler(std::string);
		static void conversion();
		static int err_out(std::string err);
		static std::string isValidLine(std::string line);
		
		
};

#endif