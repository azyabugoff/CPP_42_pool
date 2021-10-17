/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 16:22:53 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/10/17 15:17:04 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>
#include "iter.hpp"

template<typename T>
void print_arr(T arr[], int size)
{
    for (int i = 0; i < size; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

void increment(int &el) { el += 1; }

void add_quotes(std::string &str) { str = "\"" + str + "\""; }

int main()
{
    int int_arr[] = {1, -2, 3};
    std::string str_arr[] = {"these", "words", "should", "be", "in", "quotes"};

    std::cout << "int array before: ";
    print_arr(int_arr, 3);
    ::iter(int_arr, 3, increment);
    std::cout << "int array after: ";
    print_arr(int_arr, 3);

    std::cout << std::endl;

    std::cout << "string array before: ";
    print_arr(str_arr, 6);
    ::iter(str_arr, 6, add_quotes);
    std::cout << "string array after: ";
    print_arr(str_arr, 6);
    return (0);
}
