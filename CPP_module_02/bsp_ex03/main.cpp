/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 10:23:56 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/31 00:16:50 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
	Point a(0.0, 0.0);
	Point b(10.0, 10.0);
	Point c(20.0, 0.0);

	Point p1(10.0, 5.0);//внутри
	Point p2(-1.0, -1.1);//снаружи
	Point p3(5.0, 5.0);//на грани
	Point p4(0.0, 0.0);//на вершине

	std::cout << "внутри: " << bsp(a, b, c, p1) << std::endl;
	std::cout << "снаружи: " << bsp(a, b, c, p2) << std::endl;
	std::cout << "на грани: " << bsp(a, b, c, p3) << std::endl;
	std::cout << "на вершине: " << bsp(a, b, c, p4) << std::endl;
	return 0;
}
