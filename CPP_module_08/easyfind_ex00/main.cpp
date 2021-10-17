/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 23:12:43 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/10/17 19:07:03 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main()
{
    std::vector<int> vec;

    int num = 6;
    try { std::cout << *easyfind(vec, num) << std::endl; }
    catch(std::exception &e) { std::cout << num << " not found" << std::endl; }

    vec = {1, 5, 7, 2};
    try { std::cout << *easyfind(vec, num) << std::endl; }
    catch(std::exception &e) { std::cout << num << " not found" << std::endl; }

    num = 7;
    try { std::cout << *easyfind(vec, num) << std::endl; }
    catch(std::exception &e) { std::cout << num << " not found" << std::endl; }

    std::list<int> lst = {6, 45, 4, 5};
    num = 12321;
    try { std::cout << *easyfind(lst, num) << std::endl; }
    catch(std::exception &e) { std::cout << num << " not found" << std::endl; }
}
