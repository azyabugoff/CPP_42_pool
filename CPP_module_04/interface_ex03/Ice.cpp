/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 16:31:00 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/14 21:46:21 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice() { type = "ice"; }

Ice::Ice(const Ice &obj) { (void)obj; }

Ice::Ice(const std::string &type) { this->type = type; }

Ice &Ice::operator = (const Ice &obj) { (void)obj; return (*this); }

std::string const &Ice::getType() const { return (type); }

Ice *Ice::clone() const
{
	Ice	*clone = new Ice(this->getType());
	return (clone);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
