/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:03:07 by merlich           #+#    #+#             */
/*   Updated: 2022/07/17 20:40:12 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:

		Fixed( void );
		Fixed( int const int_num );
		Fixed( float const float_num );
		Fixed( Fixed const & rhs );
		~Fixed( void );
		
		Fixed &	operator=( Fixed const & rhs );

		float	toFloat( void ) const;
		int		toInt( void ) const;

		int		getRawBits( void ) const;
		void	setRawBits ( int const raw );

	private:

		int					_raw;
		static const int	_bits;

};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs );

#endif
