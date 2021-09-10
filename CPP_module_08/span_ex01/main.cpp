/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:21:04 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/09/10 21:55:05 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

int main()
{
    span obj1(5);
    std::vector<int> vec1 = obj1.getVec();
    for (int i = 0; i < vec1.size(); ++i)
        std::cout << vec1[i] << std::endl;
    return (0);
}
