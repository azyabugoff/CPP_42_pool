/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 19:21:32 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/28 23:27:44 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("PresidentialPardonForm", 25, 5, target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : Form(obj.getName(), obj.getGradeSign(), obj.getGradeExec(), obj.getTarget()) {}

PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &obj)
{
	if (this == &obj)
		return (*this);
	Form::operator=(obj);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}
