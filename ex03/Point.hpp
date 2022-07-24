/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:05:33 by merlich           #+#    #+#             */
/*   Updated: 2022/07/24 20:37:06 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

class Point
{

	public:

	/* Constructors and destructors */

		Point( void );
		Point( float const x, float const y );
		Point( Point const & instance );
		~Point( void );

	/* Assignement operators overload */
	
		Point & operator=( Point const & rhs );

	/* Getters and setters */

		Fixed const &	getX( void ) const;
		Fixed const &	getY( void ) const;

	private:

		Fixed const	_x;
		Fixed const	_y;

};

/* Overload of the insertion («) operator  */

std::ostream & operator<<( std::ostream & o, Point const & rhs );

/* bsc.cpp */

bool	bsp( Point const a, Point const b, Point const c, Point const point);
