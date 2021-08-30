/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 19:59:40 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/30 20:53:18 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <cmath>
# include "Fixed.hpp"

class Point
{
private:
	Fixed const x;
	Fixed const y;
public:
	Point();
	Point(float x, float y);
	Point(const Point &obj);
	Point &operator = (const Point &obj);
	~Point();

	Fixed const &getX() const;
	Fixed const &getY() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
