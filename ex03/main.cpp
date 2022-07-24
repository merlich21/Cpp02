/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 18:04:07 by merlich           #+#    #+#             */
/*   Updated: 2022/07/24 22:55:35 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	Point const a(2, 1);
	Point const b(4, 5);
	Point const c(5, 1);
	Point const point(3, 2);
	// Point const point(5, 1);
	// Point const point(5, 5);

	if (bsp(a, b, c, point))
		std::cout << "Your point is inside of a triangle!" << std::endl;
	else
		std::cout << "Your point is NOT inside of a triangle!" << std::endl;
	return 0;
}
