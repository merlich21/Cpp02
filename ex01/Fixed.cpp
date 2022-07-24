/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:03:52 by merlich           #+#    #+#             */
/*   Updated: 2022/07/17 23:02:07 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void ) : _raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const int_num ) : _raw(int_num << _bits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const float_num ) : _raw((int)(roundf(float_num * (1 << _bits))))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & rhs ) : _raw(rhs.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_raw = rhs.getRawBits();
	return *this;
}

float	Fixed::toFloat( void ) const
{
	return ((float)(this->_raw) / (1 << Fixed::_bits));
}

int		Fixed::toInt( void ) const
{
	return ((int)(roundf((float)(this->_raw) / (1 << Fixed::_bits))));
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_raw;
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_raw = raw;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs )
{
	o << rhs.toFloat();
	return o;
}

const int	Fixed::_bits = 8;
