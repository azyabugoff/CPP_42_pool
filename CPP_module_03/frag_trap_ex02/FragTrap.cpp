/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 20:03:48 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/12 20:09:21 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
{
    std::cout << "Default FragTrap constructor called" << std::endl;
    name = "Unnamed";
    hit_pts = 100;
    energy_pts = 100;
    damage = 30;
};

FragTrap::FragTrap(std::string const name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->name = name;
    hit_pts = 100;
    energy_pts = 100;
    damage = 30;
};

FragTrap::FragTrap(const FragTrap &obj)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    name = obj.getName();
    hit_pts = obj.getHP();
    energy_pts = obj.getEnergy();
    damage = obj.getDamage();
}

FragTrap &FragTrap::operator = (const FragTrap &obj){
	if (this == &obj)
		return (*this);
	name = obj.getName();
    hit_pts = obj.getHP();
    energy_pts = obj.getEnergy();
    damage = obj.getDamage();
	return (*this);
}

void    FragTrap::highFivesGuys()
{
    std::cout << "Give high five guys!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}
