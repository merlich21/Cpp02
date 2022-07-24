/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:03:52 by merlich           #+#    #+#             */
/*   Updated: 2022/07/24 22:39:14 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Constructors */

Fixed::Fixed( void ) : _raw(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int const int_num ) : _raw(int_num << _bits)
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const float_num ) : _raw((int)(roundf(float_num * (1 << _bits))))
{
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & rhs ) : _raw(rhs.getRawBits())
{
	// std::cout << "Copy constructor called" << std::endl;
	// std::cout << " with " << this->toFloat() << std::endl;
}

/* Destructor */

Fixed::~Fixed( void )
{
	// std::cout << "Destructor called" << std::endl;
}

/* Comparision operators overload */

int		Fixed::operator>( Fixed const &rhs ) const
{
	int res = 0;

	if (this->toFloat() > rhs.toFloat())
		res = 1;
	return res;
}

int		Fixed::operator<( Fixed const &rhs ) const
{
	return (this->toFloat() < rhs.toFloat());
}

int		Fixed::operator>=( Fixed const &rhs ) const
{
	int res = 0;

	if (this->toFloat() >= rhs.toFloat())
		res = 1;
	return res;
}

int		Fixed::operator<=( Fixed const &rhs ) const
{
	int res = 0;

	if (this->toFloat() <= rhs.toFloat())
		res = 1;
	return res;
}

int		Fixed::operator==( Fixed const &rhs ) const
{
	int res = 0;

	if (this->toFloat() == rhs.toFloat())
		res = 1;
	return res;
}

int		Fixed::operator!=( Fixed const &rhs ) const
{
	int res = 0;

	if (this->toFloat() != rhs.toFloat())
		res = 1;
	return res;
}

/* Assignement operator`s overload */

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	// std::cout << "Copy assignement operator called" << std::endl;
	this->_raw = rhs.getRawBits();
	return *this;
}

/* Arithmetic operators overload */

Fixed	Fixed::operator+( Fixed const &rhs ) const
{
	// std::cout << "Summation operator is called with " << this->toFloat();
	// std::cout << " and " << rhs << std::endl;
	return Fixed( this->toFloat() + rhs.toFloat() );
}

Fixed	Fixed::operator-( Fixed const &rhs ) const
{
	// std::cout << "Substraction operator is called with " << this->toFloat();
	// std::cout << " and " << rhs << std::endl;
	return Fixed( this->toFloat() - rhs.toFloat() );
}

Fixed	Fixed::operator*( Fixed const &rhs ) const
{
	// std::cout << "Multiplication operator is called with " << this->toFloat();
	// std::cout << " and " << rhs << std::endl;
	return Fixed( this->toFloat() * rhs.toFloat() );
}

Fixed	Fixed::operator/( Fixed const &rhs ) const
{
	// std::cout << "Division operator is called with " << this->toFloat();
	// std::cout << " and " << rhs << std::endl;
	return Fixed( this->toFloat() / rhs.toFloat() );
}

/* Convertion functions */

float	Fixed::toFloat( void ) const
{
	return ((float)(this->_raw) / (1 << Fixed::_bits));
}

int		Fixed::toInt( void ) const
{
	return ((int)(roundf((float)(this->_raw) / (1 << Fixed::_bits))));
}

/* Pre-increment and pre-decrement operators overload */

Fixed &	Fixed::operator++( void )
{
	++(this->_raw);
	return (*this);
}

Fixed &	Fixed::operator--( void )
{
	--(this->_raw);
	return (*this);
}

/* Post-increment and post-decrement operators overload */

Fixed	Fixed::operator++( int n )
{
	Fixed	tmp = *this;

	if (n == 0)
		++(*this);
	else
		this->_raw += n;
	return (tmp);
}

Fixed	Fixed::operator--( int n )
{
	Fixed	tmp = *this;

	if (n != 0)
		this->_raw -= n;
	else
		--(*this);
	return (tmp);
}

/* MIN and MAX functions overload */

Fixed &	Fixed::min( Fixed &lhs, Fixed &rhs )
{
	if (lhs < rhs)
		return lhs;
	else
		return rhs;
}

Fixed &	Fixed::max( Fixed &lhs, Fixed &rhs )
{
	if (lhs > rhs)
		return lhs;
	else
		return rhs;
}

Fixed const &	Fixed::min( Fixed const &lhs, Fixed const &rhs )
{
	if (lhs < rhs)
		return lhs;
	else
		return rhs;
}

Fixed const &	Fixed::max( Fixed const &lhs, Fixed const &rhs )
{
	if (lhs > rhs)
		return lhs;
	else
		return rhs;
}

/* Getter and Setter */

int		Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_raw;
}

void	Fixed::setRawBits( int const raw )
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_raw = raw;
}

/* Overload of the insertion («) operator  */

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs )
{
	o << rhs.toFloat();
	return o;
}

const int	Fixed::_bits = 8;
