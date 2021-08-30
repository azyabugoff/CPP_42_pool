/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 20:22:09 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/31 00:13:59 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

static float area(float x1, float y1, float x2, float y2, float x3, float y3)
{
	float trig_area = (float)((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1)) / 2;
	return (trig_area > 0.0 ? trig_area : -trig_area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float abc = area(a.getX().toFloat(), a.getY().toFloat(), b.getX().toFloat(), b.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat());

	float abp = area(a.getX().toFloat(), a.getY().toFloat(), b.getX().toFloat(), b.getY().toFloat(), point.getX().toFloat(), point.getY().toFloat());
	float acp = area(a.getX().toFloat(), a.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat(), point.getX().toFloat(), point.getY().toFloat());
	float bcp = area(b.getX().toFloat(), b.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat(), point.getX().toFloat(), point.getY().toFloat());

	if ((abc == (abp + acp + bcp)) && abp != 0 && acp != 0 && bcp != 0)
		return true;
	return false;
}
