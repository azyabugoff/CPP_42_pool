/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 00:29:36 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/07 01:12:35 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie  *zombie_horde = NULL;

    if (N <= 0)
    {
        std::cout << "HORDE OF ZOMBIES SHOULD CONSIST OF MORE THAN 0 ZOMBIES." << std::endl;
        return (NULL);
    }
    zombie_horde = new Zombie[N];
    for (int i = 0; i < N; ++i)
        zombie_horde[i].set_name(name);
    return (zombie_horde);
}
