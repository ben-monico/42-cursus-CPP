/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 18:43:21 by bcarreir          #+#    #+#             */
/*   Updated: 2023/05/04 19:20:25 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>

template <typename T>
typename T::iterator easyfind(T &t, int i)
{
	typename T::iterator it = std::find(t.begin(), t.end(), i);
	if (it == t.end())
		throw std::exception();
	return it;
}

#endif