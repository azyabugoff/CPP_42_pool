/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:21:04 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/09/19 00:05:18 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

int main()
{
    std::cout << "\n---------------my simple example------------------\n" << std::endl;
    Span s1(3);
    s1.addNumber(3);
    try { std::cout << s1.shortestSpan() << std::endl; }
    catch(const std::exception &e) { std::cerr << e.what() << std::endl; }
    s1.addNumber(-2147483648);
    s1.addNumber(2147483647);
    try { s1.addNumber(23); }
    catch(const std::exception &e) { std::cerr << e.what() << std::endl; }
    std::cout << "shortest span = " << s1.shortestSpan() << std::endl;
    std::cout << "longest span = " << s1.longestSpan() << std::endl;

    std::cout << "\n---------------subject exmple------------------\n" << std::endl;
    Span s2 = Span(5);
    s2.addNumber(5);
    s2.addNumber(3);
    s2.addNumber(17);
    s2.addNumber(9);
    s2.addNumber(11);
    std::cout << s2.shortestSpan() << std::endl;
    std::cout << s2.longestSpan() << std::endl;

    std::cout << "\n---------------a lot of numbers example------------------\n" << std::endl;
    Span s3 = Span(10002);
    std::cout << "add -2147483648 and 3" << std::endl;
    s3.addNumber(3);
    s3.addNumber(-2147483648);
    std::vector<int> ten_thousands_ints(10000, 2147483647);
    std::cout << "add vector with size: " << ten_thousands_ints.size() << ", filled by number: 2147483647" << std::endl;
    s3.addNumber(ten_thousands_ints.begin(), ten_thousands_ints.end());
    std::cout << "shortest span = " << s3.shortestSpan() << std::endl;
    std::cout << "longest span = " << s3.longestSpan() << std::endl;
    try
    {
        std::vector<int> vec(1, 1);
        std::cout << "add vector with size: " << vec.size() << ", filled by number: 1" << std::endl;
        s3.addNumber(vec.begin(), vec.end());
    }
    catch(const std::exception& e) { std::cerr << e.what() << std::endl; }
    return (0);
}
