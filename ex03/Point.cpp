/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:05:35 by merlich           #+#    #+#             */
/*   Updated: 2022/07/24 22:39:29 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/* Constructors and destructors */

Point::Point() : _x(0), _y(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Point::~Point( void )
{
	// std::cout << "Destructor called" << std::endl;
}

Point::Point( float x, float y ) : _x(x), _y(y)
{
	// std::cout << "Custom constructor called" << std::endl;
}

Point::Point( Point const & point ) : _x(point.getX()), _y(point.getY())
{
	// std::cout << "Copy constructor called" << std::endl;
}

/* Assignement operators overload */

Point & Point::operator=( Point const & rhs )
{
	(void)rhs;
	return *this;
}

/* Getters */

Fixed const & Point::getX( void ) const
{
	return this->_x;
}

Fixed const &	Point::getY( void ) const
{
	return this->_y;
}

/* Overload of the insertion («) operator  */

std::ostream & operator<<( std::ostream & o, Point const & rhs )
{
	o << "( " << rhs.getX() << " , ";
	o << rhs.getY() << " )" << std::endl;
	return o;
}
