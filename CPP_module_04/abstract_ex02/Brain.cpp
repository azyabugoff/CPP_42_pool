/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 18:58:31 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/13 20:44:35 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
    std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
    std::cout << "Copy Brain constructor called" << std::endl;
    *this = obj;
}

Brain &Brain::operator = (const Brain &obj)
{
    std::cout << "Assign Brain constructor called" << std::endl;
    if (this == &obj)
        return (*this);
    for (int i = 0; i < 100; ++i)
        ideas[i] = obj.getIdea(i);
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdea(int ind) const
{
    if (ind < 0 || ind >= 100)
		return (nullptr);
    return (ideas[ind]);
}

void Brain::setIdea(int ind, const std::string &idea)
{
    if (ind < 0 || ind >= 100)
		return ;
    this->ideas[ind] = idea;
}
