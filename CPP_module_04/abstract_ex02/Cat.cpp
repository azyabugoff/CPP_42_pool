/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 13:59:24 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/13 23:45:25 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

Cat::Cat()
{
    std::cout << "Default Cat constructor called" << std::endl;
    brain = new Brain();
    type = "Cat";
}

Cat::Cat(const Cat &obj)
{
    std::cout << "Copy Animal constructor called" << std:: endl;
    type = obj.getType();
    brain = new Brain();
    for (int i = 0; i < 100; i++)
	{
		this->brain->setIdea(i, obj.brain->getIdea(i));
	}
}

Cat &Cat::operator = (const Cat &obj)
{
    std::cout << "Assign Cat constructor called" << std:: endl;
    if (this == &obj)
        return (*this);
    type = obj.getType();
    if (brain != nullptr)
        delete brain;
    this->brain = new Brain();
	for (int i = 0; i < 100; i++)
	{
		this->brain->setIdea(i, obj.brain->getIdea(i));
	}
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

void    Cat::makeSound() const
{
    std::cout << "meow meow" << std::endl;
}

std::string Cat::getType() const { return (type); }

Brain  *Cat::getBrain() const
{
	return (this->brain);
}
