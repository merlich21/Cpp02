/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 18:05:37 by merlich           #+#    #+#             */
/*   Updated: 2022/07/24 22:35:10 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float	get_scalar_prod( Point const o, Point const m, Point const n )
{
	float	mn;

	mn = (m.getX().toFloat() - o.getX().toFloat()) * (n.getX().toFloat() - o.getX().toFloat()) + \
		(m.getY().toFloat() - o.getY().toFloat()) * (n.getY().toFloat() - o.getY().toFloat());
	return mn;
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	ap;
	float	bp;
	float	cp;

	ap = get_scalar_prod(a, b, point);
	bp = get_scalar_prod(b, c, point);
	cp = get_scalar_prod(c, a, point);

	if (ap > 0 && bp > 0 && cp > 0)
		return 1;
	else
		return 0;
}
