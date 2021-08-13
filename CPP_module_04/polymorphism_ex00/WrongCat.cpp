/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 13:59:24 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/13 15:20:18 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat()
{
    std::cout << "Default WrongCat constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &obj)
{
    std::cout << "Copy WrongCat constructor called" << std:: endl;
    type = obj.getType();
}

WrongCat &WrongCat::operator = (const WrongCat &obj)
{
    std::cout << "Assign WrongCat constructor called" << std:: endl;
    if (this == &obj)
        return (*this);
    type = obj.getType();
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "wrong meow meow" << std::endl;
}

std::string WrongCat::getType() const { return (type); }
