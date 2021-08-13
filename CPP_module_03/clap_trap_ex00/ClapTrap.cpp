/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 12:35:41 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/12 16:18:18 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
    std::cout << "Default ClapTrap constructor called" << std::endl;
    name = "Unnamed";
    hit_pts = 10;
    energy_pts = 10;
    damage = 0;
};

ClapTrap::ClapTrap(std::string const name)
{
    std::cout << "ClapTrap constructor called" << std::endl;
    this->name = name;
    hit_pts = 10;
    energy_pts = 10;
    damage = 0;
};

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    name = obj.getName();
    hit_pts = obj.getHP();
    energy_pts = obj.getEnergy();
    damage = obj.getDamage();
}

ClapTrap &ClapTrap::operator = (const ClapTrap &obj){
	if (this == &obj)
		return (*this);
	name = obj.getName();
    hit_pts = obj.getHP();
    energy_pts = obj.getEnergy();
    damage = obj.getDamage();
	return (*this);
}

std::string ClapTrap::getName() const
{
    return (name);
}

int ClapTrap::getHP() const
{
    return (hit_pts);
}

int ClapTrap::getEnergy() const
{
    return (energy_pts);
}

int ClapTrap::getDamage() const
{
    return (damage);
}

void    ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << name << " attacked " << target
        << ", causing " << damage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " lost " << amount
        << " hit points after taking damage. They have " 
        << hit_pts - amount << " HPs now!" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " repaired " << amount << " HPs and energy! Now their HPs are "
        << hit_pts + amount << " and energy points are " << energy_pts + amount << "." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}
