/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcarreir <bcarreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 00:54:16 by bcarreir          #+#    #+#             */
/*   Updated: 2023/04/05 17:24:19 by bcarreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "a is " <<  a << std::endl;
	std::cout << (a != b) << std::endl;
	std::cout << (a < b) << std::endl;
	std::cout << ++a << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << a + b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	
	return 0;
}

class main
{
private:
	/* data */
public:
	main(/* args */);
	~main();
};

main::main(/* args */)
{
}

main::~main()
{
}
