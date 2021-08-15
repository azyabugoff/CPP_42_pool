/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 16:31:00 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/16 00:58:10 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &obj) : AMateria(obj.getType()) {}

//Cure::Cure(const std::string &type) { this->type = type; }

Cure &Cure::operator = (const Cure &obj) { (void)obj; return (*this); }

Cure::~Cure() {};

//std::string const &Cure::getType() const { return (type); }

AMateria *Cure::clone() const
{
	AMateria *clone = new Cure(*this);
	return (clone);
}

void Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
