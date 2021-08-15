/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 16:31:00 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/16 00:58:13 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice &obj) : AMateria(obj.getType()) {}

//Ice::Ice(const std::string &type) { this->type = type; }

Ice &Ice::operator = (const Ice &obj) { (void)obj; return (*this); }

Ice::~Ice() {}

//std::string const &Ice::getType() const { return (type); }

AMateria *Ice::clone() const
{
	Ice	*clone = new Ice(*this);
	return (clone);
}

void Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
