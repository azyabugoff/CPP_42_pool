/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 13:59:24 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/13 14:37:30 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream>

Dog::Dog()
{
    std::cout << "Default Dog constructor called" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog &obj)
{
    std::cout << "Copy Dog constructor called" << std:: endl;
    type = obj.getType();
}

Dog &Dog::operator = (const Dog &obj)
{
    std::cout << "Assign Dog constructor called" << std:: endl;
    if (this == &obj)
        return (*this);
    type = obj.getType();
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "woof woof" << std::endl;
}

std::string Dog::getType() const { return (type); }
