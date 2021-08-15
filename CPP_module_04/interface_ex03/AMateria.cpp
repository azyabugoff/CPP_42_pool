/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 15:32:22 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/16 00:58:03 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

//AMateria::AMateria() { type = "AMateria"; }

//AMateria::AMateria(const AMateria &obj) { type = obj.type; }

AMateria::AMateria(const std::string &type) { this->type = type; }

//AMateria &AMateria::operator = (const AMateria &obj)
//{
//	if (this == &obj)
//		return (*this);
//	type = obj.type;
//	return (*this);
//}

AMateria::~AMateria() {}

std::string const &AMateria::getType() const { return (this->type); }

void	AMateria::use(ICharacter &target) { (void)target; }
