/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 17:19:11 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/28 21:57:09 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Unnamed"), gr_to_sign(150), gr_to_exec(150), is_signed(false), target("") {}

Form::Form(const std::string name, int gr_to_sign, int gr_to_exec, std::string target) : name(name), gr_to_sign(gr_to_sign), gr_to_exec(gr_to_exec), is_signed(false), target(target)
{
	if (gr_to_sign < 1 || gr_to_exec < 1)
		throw Form::GradeTooHighException();
	else if (gr_to_sign > 150 || gr_to_exec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &obj) : name(obj.name), gr_to_sign(obj.gr_to_sign), gr_to_exec(obj.gr_to_exec), is_signed(obj.is_signed), target(obj.target)
{
	if (gr_to_sign < 1 || gr_to_exec < 1)
		throw Form::GradeTooHighException();
	else if (gr_to_sign > 150 || gr_to_exec > 150)
		throw Form::GradeTooLowException();
}

Form &Form::operator = (const Form &obj)
{
	if (obj.gr_to_sign < 1 || obj.gr_to_exec < 1)
		throw Form::GradeTooHighException();
	else if (obj.gr_to_sign > 150 || obj.gr_to_exec > 150)
		throw Form::GradeTooLowException();
	if (this == &obj)
		return (*this);
	this->target = obj.target;
	this->is_signed = obj.is_signed;
	return (*this);
}

Form::~Form() {}

const std::string &Form::getName() const { return (this->name); }

int Form::getGradeSign() const { return (this->gr_to_sign); }

int Form::getGradeExec() const { return (this->gr_to_exec); }

bool Form::getSign() const { return (this->is_signed); }

void Form::beSigned(const Bureaucrat &obj)
{
	if (this->gr_to_sign < obj.getGrade())
		throw Form::GradeTooLowException();
	else
		this->is_signed = true;
}

const std::string &Form::getTarget() const { return (this->target); }

const char *Form::GradeTooHighException::what() const throw() { return ("GradeTooHighException (Form)"); }

const char *Form::GradeTooLowException::what() const throw() { return("GradeTooLowException (Form)"); }

std::ostream &operator << (std::ostream &out, const Form &obj)
{
	out << obj.getName() << " form grade_to_sign: " << obj.getGradeSign() << ", grade_to_execute: " << obj.getGradeExec() << ", is_signed: " << obj.getSign();
	return (out);
}
