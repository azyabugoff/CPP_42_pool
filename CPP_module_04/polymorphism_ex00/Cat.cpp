/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 13:59:24 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/13 14:37:16 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

Cat::Cat()
{
    std::cout << "Default Cat constructor called" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat &obj)
{
    std::cout << "Copy Animal constructor called" << std:: endl;
    type = obj.getType();
}

Cat &Cat::operator = (const Cat &obj)
{
    std::cout << "Assign Cat constructor called" << std:: endl;
    if (this == &obj)
        return (*this);
    type = obj.getType();
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "meow meow" << std::endl;
}

std::string Cat::getType() const { return (type); }
