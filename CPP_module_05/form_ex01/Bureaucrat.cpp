/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 14:22:57 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/27 17:10:56 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Unnamed"), grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	if (obj.grade < 1)
		throw GradeTooHighException();
	else if (obj.grade > 150)
		throw GradeTooLowException();
	this->grade = obj.grade;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &obj)
{
	if (obj.grade < 1)
		throw GradeTooHighException();
	else if (obj.grade > 150)
		throw GradeTooLowException();
	if (this == &obj)
		return (*this);
	this->grade = obj.grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(){}

int	Bureaucrat::getGrade() const { return (this->grade); }

const std::string &Bureaucrat::getName() const { return (this->name); }

void	Bureaucrat::increment()
{
	--this->grade;
	if (this->grade < 1)
		throw GradeTooHighException();
	else if (this->grade > 150)
		throw GradeTooLowException();
}

void	Bureaucrat::decrement()
{
	++this->grade;
	if (this->grade < 1)
		throw GradeTooHighException();
	else if (this->grade > 150)
		throw GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw() { return ("GradeTooHighException (Bureaucrat)"); }

const char *Bureaucrat::GradeTooLowException::what() const throw() { return("GradeTooLowException (Bureaucrat)"); }

std::ostream &operator << (std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (out);
}
