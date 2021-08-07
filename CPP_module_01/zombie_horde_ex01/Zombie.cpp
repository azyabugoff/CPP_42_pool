/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 19:40:41 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/07 00:28:28 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){};

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << name << " does not exist anymore..." << std::endl;
};

void    Zombie::set_name(std::string name)
{
    this->name = name;
}

void    Zombie::announce()
{
    std::cout << name << "  BraiiiiiiinnnzzzZ..." << std::endl;
}
