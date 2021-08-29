/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 14:22:57 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/30 00:04:14 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Unnamed"), grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
	if (obj.grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (obj.grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = obj.grade;
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &obj)
{
	if (obj.grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (obj.grade > 150)
		throw Bureaucrat::GradeTooLowException();
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
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::decrement()
{
	++this->grade;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::signForm(Form &obj)
{
	if (obj.getSign() == true)
	{
		std::cout << this->name << " cannot sign " << obj.getName() << " because form is already signed" << std::endl;
		return ;
	}
	if (obj.getGradeSign() < this->getGrade())
	{
		std::cout << this->name << " cannot sign " << obj.getName() << " because bureaucrat has not enough high grade" << std::endl;
		return ;
	}
	else
		std::cout << this->name << " signs " << obj.getName() << std::endl;
	obj.beSigned(*this);
}

void Bureaucrat::executeForm(Form const &form)
{
	if (!form.getSign())
		std::cout << this->name << " cannot execute " << form.getName() << " because the form is not signed" << std::endl;
	else if (form.getGradeExec() < this->grade)
		std::cout << this->name << " cannot execute " << form.getName() << " because it's grade is too low." << std::endl;
	else
		std::cout << this->name << " executes " << form.getName() << std::endl;
	form.execute(*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw() { return ("GradeTooHighException (Bureaucrat)"); }

const char *Bureaucrat::GradeTooLowException::what() const throw() { return("GradeTooLowException (Bureaucrat)"); }

std::ostream &operator << (std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (out);
}
