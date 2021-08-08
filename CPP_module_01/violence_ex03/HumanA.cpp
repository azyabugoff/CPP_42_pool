/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 10:32:07 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/08 13:37:52 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const& name, Weapon& weapon) : name(name), weapon(weapon) {};

HumanA::~HumanA(){};

void    HumanA::attack()
{
    std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}
