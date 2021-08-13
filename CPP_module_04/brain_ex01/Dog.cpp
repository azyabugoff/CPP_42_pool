/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 13:59:24 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/13 23:45:53 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream>

Dog::Dog()
{
    std::cout << "Default Dog constructor called" << std::endl;
    brain = new Brain();
    type = "Dog";
}

Dog::Dog(const Dog &obj)
{
    std::cout << "Copy Dog constructor called" << std:: endl;
    type = obj.getType();
    brain = new Brain();
    for (int i = 0; i < 100; i++)
	{
		this->brain->setIdea(i, obj.brain->getIdea(i));
	}
}

Dog &Dog::operator = (const Dog &obj)
{
    std::cout << "Assign Dog constructor called" << std:: endl;
    if (this == &obj)
        return (*this);
    type = obj.getType();
    if (brain != nullptr)
        delete brain;
    brain = new Brain();
    for (int i = 0; i < 100; i++)
	{
		this->brain->setIdea(i, obj.brain->getIdea(i));
	}
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

void    Dog::makeSound() const
{
    std::cout << "woof woof" << std::endl;
}

std::string Dog::getType() const { return (type); }

Brain  *Dog::getBrain() const
{
	return (this->brain);
}
