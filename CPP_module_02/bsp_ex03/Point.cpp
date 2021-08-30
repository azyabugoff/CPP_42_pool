/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 20:01:23 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/30 20:54:35 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(float x, float y) : x(x), y(y) {}

Point::Point(const Point &obj) : x(obj.x), y(obj.y) {}

Point &Point::operator = (const Point &obj) { (void)obj; return (*this); }

Point::~Point() {}

Fixed const &Point::getX() const { return (this->x); }

Fixed const &Point::getY() const { return (this->y); }
