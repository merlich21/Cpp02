/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:03:07 by merlich           #+#    #+#             */
/*   Updated: 2022/07/24 20:27:48 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:

	/* Constructors and destructors */

		Fixed( void );
		Fixed( int const int_num );
		Fixed( float const float_num );
		Fixed( Fixed const & rhs );
		~Fixed( void );

	/* Assignement operators overload */

		Fixed &	operator=( Fixed const & rhs );

	/* Convertion functions */

		float	toFloat( void ) const;
		int		toInt( void ) const;

	/* Comparision operators overload */

		int		operator>( Fixed const & rhs ) const;
		int		operator<( Fixed const & rhs ) const;
		int		operator>=( Fixed const & rhs ) const;
		int		operator<=( Fixed const & rhs ) const;
		int		operator==( Fixed const & rhs ) const;
		int		operator!=( Fixed const & rhs ) const;

	/* Arithmetic operators overload */

		Fixed	operator+( Fixed const & rhs ) const;
		Fixed	operator-( Fixed const & rhs ) const;
		Fixed	operator*( Fixed const & rhs ) const;
		Fixed	operator/( Fixed const & rhs ) const;

	/* Pre-increment and pre-decrement operators overload */

		Fixed &	operator++( void );
		Fixed &	operator--( void );

	/* Post-increment and post-decrement operators overload */

		Fixed	operator++( int n );
		Fixed	operator--( int n );

	/* MIN and MAX functions overload */

		static Fixed &	min( Fixed & lhs, Fixed & rhs );
		static Fixed &	max( Fixed & lhs, Fixed & rhs );

		static Fixed const &	min( Fixed const & lhs, Fixed const & rhs );
		static Fixed const &	max( Fixed const & lhs, Fixed const & rhs );

	/* Setter and getter */

		int		getRawBits( void ) const;
		void	setRawBits ( int const raw );

	private:

		int					_raw;
		static const int	_bits;

};

/* Overload of the insertion («) operator  */

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs );

#endif
