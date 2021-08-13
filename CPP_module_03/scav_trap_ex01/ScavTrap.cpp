/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 14:12:40 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/12 19:58:00 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
    std::cout << "Default ScavTrap constructor called" << std::endl;
    name = "Unnamed";
    hit_pts = 100;
    energy_pts = 50;
    damage = 20;
};

ScavTrap::ScavTrap(std::string const name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->name = name;
    hit_pts = 100;
    energy_pts = 50;
    damage = 20;
};

ScavTrap::ScavTrap(const ScavTrap &obj)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    name = obj.getName();
    hit_pts = obj.getHP();
    energy_pts = obj.getEnergy();
    damage = obj.getDamage();
}

ScavTrap &ScavTrap::operator = (const ScavTrap &obj){
	if (this == &obj)
		return (*this);
	name = obj.getName();
    hit_pts = obj.getHP();
    energy_pts = obj.getEnergy();
    damage = obj.getDamage();
	return (*this);
}

void    ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap " << name << " attacked " << target
        << ", causing " << damage << " points of damage!" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}
