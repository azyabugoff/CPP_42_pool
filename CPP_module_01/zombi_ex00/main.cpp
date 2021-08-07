/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 19:16:27 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/06 21:22:11 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string names[6] = {"Z_grandpa", "Z_granny", "Z_father", "Z_mom", "Z_son", "Z_daughter"};
    int         r = 0;

    for (int i = 0; i < 10; ++i)
    {
        r = rand() % 6;
        randomChump(names[r]);
    }
    return (0);
}
