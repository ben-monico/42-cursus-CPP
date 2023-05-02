/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:15:12 by bcarreir          #+#    #+#             */
/*   Updated: 2023/05/02 16:28:06 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
void print(T &t)
{
	std::cout << t << std::endl;
}

template <typename T>
void iter(T	*arr, std::size_t len, void (*func)(T &t))
{
	for (std::size_t i = 0; i < len; i++)
		func(arr[i]);
}


#endif