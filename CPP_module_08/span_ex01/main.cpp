/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:21:04 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/09/12 01:31:08 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

int main()
{
    span s(3);
    s.addNumber(-2147483647 - 1);
    try { std::cout << s.shortestSpan() << std::endl; }
    catch(const std::exception &e) { std::cerr << e.what() << std::endl; }
    s.addNumber(3);
    s.addNumber(2147483647);
    try { s.addNumber(23); }
    catch(const std::exception &e) { std::cerr << e.what() << std::endl; }
    std::cout << "shortest span = " << s.shortestSpan() << std::endl;
    std::cout << "longest span = " << s.longestSpan() << std::endl;
    return (0);
}
