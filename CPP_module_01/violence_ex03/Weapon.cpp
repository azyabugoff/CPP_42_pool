/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 10:31:11 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/07 15:12:20 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const& type)
{
    this->type = type;
}

void    Weapon::setType(std::string const& type)
{
    this->type = type;
}

std::string const&    Weapon::getType()
{
    return (type);
}
