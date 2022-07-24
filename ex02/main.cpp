/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:04:07 by merlich           #+#    #+#             */
/*   Updated: 2022/07/24 17:55:22 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed 		a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;

	
	return 0;
}

// int main( void )
// {
// 	Fixed 		a;
// 	Fixed		b( 1 );
// 	Fixed		c( 3.1415f );
// 	Fixed		d( b );
// 	Fixed		e = ( c + b );
// 	Fixed		f = ( c - b );
// 	Fixed const g = ( c * c );
// 	Fixed const	h = ( c / c );

// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << c << std::endl;
// 	std::cout << d << std::endl;
// 	std::cout << e << std::endl;
// 	std::cout << f << std::endl;
// 	std::cout << g << std::endl;
// 	std::cout << h << std::endl;

// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;

// 	std::cout << --a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a-- << std::endl;
// 	std::cout << a << std::endl;

// 	std::cout << ++c << std::endl;
// 	std::cout << c << std::endl;
// 	std::cout << c++ << std::endl;
// 	std::cout << c << std::endl;

// 	std::cout << --c << std::endl;
// 	std::cout << c << std::endl;
// 	std::cout << c-- << std::endl;
// 	std::cout << c << std::endl;
	
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	std::cout << Fixed::min( a, b ) << std::endl;

// 	std::cout << Fixed::max( g, h ) << std::endl;
// 	std::cout << Fixed::min( g, h ) << std::endl;

// 	std::cout << (a < c) << std::endl;
// 	std::cout << (a <= c) << std::endl;
// 	std::cout << (a > c) << std::endl;
// 	std::cout << (a >= c) << std::endl;
// 	std::cout << (a == c) << std::endl;
// 	std::cout << (a != c) << std::endl;

// 	return 0;
// }
