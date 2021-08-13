/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 13:59:24 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/13 15:19:23 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal()
{
    std::cout << "Default WrongAnimal constructor called" << std::endl;
    type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    std::cout << "Copy WrongAnimal constructor called" << std:: endl;
    type = obj.getType();
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &obj)
{
    std::cout << "Assign WrongAnimal constructor called" << std:: endl;
    if (this == &obj)
        return (*this);
    type = obj.getType();
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "WrongAaaaaniimaaaal" << std::endl;
}

std::string WrongAnimal::getType() const { return (type); }
