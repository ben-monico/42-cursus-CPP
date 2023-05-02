/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 01:56:47 by bcarreir          #+#    #+#             */
/*   Updated: 2023/05/02 16:27:43 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void increment(int &i)
{
	i++;
}

void halfinc(float &i)
{
	i += 0.5f;
}

int main( void ) {
	
int arr[] = { 0, 1, 2, 3, 4 };
float farr[] = { 0.0f, 1.0f, 2.0f, 3.0f, 4.0f };
char str[] = "Hello World!";

::iter(arr, 5, increment);
::iter(arr, 5, ::print);

::iter(str, 13, ::print);

::iter(farr, 5, ::halfinc);
::iter(farr, 5, ::print);

}
