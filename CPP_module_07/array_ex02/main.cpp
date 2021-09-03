/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 20:26:38 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/09/03 22:00:13 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.hpp"

template<typename T>
void print_arr(Array<T> &arr)
{
    for (int i = 0; i < arr.size(); ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main()
{
    Array<std::string> arr1(10);
    for (int i = 0; i < arr1.size(); ++i)
        arr1[i] = "str" + std::to_string(i);

    Array<std::string> arr2(arr1);
    Array<std::string> arr3(arr1);
    arr3 = arr2;

    std::cout << "Array1:" << std::endl;
    print_arr(arr1);
    std::cout << std::endl;
    std::cout << "Array2 made by copy constructor:" << std::endl;
    print_arr(arr2);
    std::cout << std::endl;
    std::cout << "Array3 assigned by = operator:" << std::endl;
    print_arr(arr3);
    std::cout << std::endl;
    try { std::cout << "arr1[12] = " << arr1[12] << std::endl; }
    catch(const std::exception& e) { std::cout << e.what() << std::endl; }
    return (0);
}
