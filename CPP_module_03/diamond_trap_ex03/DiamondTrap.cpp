/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 20:03:48 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/13 10:37:00 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
{
    std::cout << "Default DiamondTrap constructor called" << std::endl;
    name = "Unnamed";
    ClapTrap::name = "Unnamed_clap_name";
    hit_pts = FragTrap::hit_pts;
    energy_pts = ScavTrap::energy_pts;
    damage = FragTrap::damage;
};

DiamondTrap::DiamondTrap(std::string const name)
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    this->name = name;
    ClapTrap::name = name + "_clap_name";
    hit_pts = FragTrap::hit_pts;
    energy_pts = ScavTrap::energy_pts;
    damage = FragTrap::damage;
};

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    name = obj.getName();
    ClapTrap::name = ((ClapTrap)obj).getName();
    hit_pts = obj.getHP();
    energy_pts = obj.getEnergy();
    damage = obj.getDamage();
}

DiamondTrap &DiamondTrap::operator = (const DiamondTrap &obj){
	if (this == &obj)
		return (*this);
	name = obj.getName();
    ClapTrap::name = ((ClapTrap)obj).getName();
    hit_pts = obj.getHP();
    energy_pts = obj.getEnergy();
    damage = obj.getDamage();
	return (*this);
}

void    DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "I am " << name << ";     ClapTraps name: " << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}
