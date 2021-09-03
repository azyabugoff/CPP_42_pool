/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 21:34:57 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/09/03 15:20:05 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "whatever.hpp"

int main()
{
    int a_int = -5;
    int b_int = 123;
    std::string a_str = "a_str";
    std::string b_str = "b_string";
    std::cout << "a_int = " << a_int << "\tb_int = " << b_int << std::endl;
    std::cout << "a_str = \"" << a_str << "\"\tb_str = \"" << b_str << "\"" << std::endl;
    std::cout << "max(a_int, b_int) = " << ::max(a_int, b_int) << std::endl;
    std::cout << "max(a_str, b_str) = \"" << ::max(a_str, b_str) << "\"" << std::endl;
    std::cout << "min(a_int, b_int) = " << ::min(a_int, b_int) << std::endl;
    std::cout << "min(a_str, b_str) = \"" << ::min(a_str, b_str) << "\"" << std::endl;
    std::cout << "----swap(a_int, b_int)----" << std::endl;
    ::swap(a_int, b_int);
    std::cout << "a_int = " << a_int << "\tb_int = " << b_int << std::endl;
    std::cout << "----swap(a_str, b_str)----" << std::endl;
    ::swap(a_str, b_str);
    std::cout << "a_str = \"" << a_str << "\"\tb_str = \"" << b_str << "\"" << std::endl;
    return (0);
}
