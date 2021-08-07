/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 19:16:27 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/07 01:15:25 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string names[6] = {"Z_grandpa", "Z_granny", "Z_father", "Z_mom", "Z_son", "Z_daughter"};
    for (int iter = 0; iter < 6; ++iter)
    {
        int ind_name = rand() % 6;
        int N = rand() % 10 - 2;
        Zombie  *zomb_horde = zombieHorde(N, names[ind_name]);
        for (int i = 0; i < N; ++i)
            zomb_horde[i].announce();
        delete[] zomb_horde;
    }
    return (0);
}
