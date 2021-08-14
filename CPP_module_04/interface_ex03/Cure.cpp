/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 16:31:00 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/14 21:45:56 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

Cure::Cure() { type = "cure"; }

Cure::Cure(const Cure &obj) { (void)obj; }

Cure::Cure(const std::string &type) { this->type = type; }

Cure &Cure::operator = (const Cure &obj) { (void)obj; return (*this); }

std::string const &Cure::getType() const { return (type); }

Cure *Cure::clone() const
{
	Cure *clone = new Cure(this->getType());
	return (clone);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
