/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 10:32:36 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/07 15:16:28 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const& name)
{
    this->name = name;
};

HumanB::HumanB(std::string const& name, Weapon *weapon)
{
    this->name = name;
    this->weapon = weapon;
};

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void    HumanB::attack()
{
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
