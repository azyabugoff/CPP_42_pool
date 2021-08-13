/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 13:59:24 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/13 14:36:33 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#include <iostream>

Animal::Animal()
{
    std::cout << "Default Animal constructor called" << std::endl;
    type = "Animal";
}

Animal::Animal(const Animal &obj)
{
    std::cout << "Copy Animal constructor called" << std:: endl;
    type = obj.getType();
}

Animal &Animal::operator = (const Animal &obj)
{
    std::cout << "Assign Animal constructor called" << std:: endl;
    if (this == &obj)
        return (*this);
    type = obj.getType();
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void    Animal::makeSound() const
{
    std::cout << "Aaaaaniimaaaal" << std::endl;
}

std::string Animal::getType() const { return (type); }
