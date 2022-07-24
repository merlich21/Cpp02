/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:03:07 by merlich           #+#    #+#             */
/*   Updated: 2022/07/09 23:37:59 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	public:

		Fixed( void );
		Fixed( Fixed const & rhs );
		~Fixed( void );
		
		Fixed &	operator=( Fixed const & rhs );

		int		getRawBits( void ) const;
		void	setRawBits ( int const raw );

	private:

		int					_raw;
		static const int	_bits;

};



#endif
