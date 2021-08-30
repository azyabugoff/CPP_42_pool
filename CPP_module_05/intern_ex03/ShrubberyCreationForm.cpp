/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 19:22:51 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/30 14:12:20 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : Form(obj.getName(), obj.getGradeSign(), obj.getGradeExec()), target(obj.getTarget()) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &obj)
{
	if (this == &obj)
		return (*this);
	Form::operator=(obj);
	this->target = obj.getTarget();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

const std::string &ShrubberyCreationForm::getTarget() const { return (this->target); }

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::ofstream file(this->target + "_shrubbery", std::ios::out | std::ios::app);
    if (file.fail())
        throw WorkWithFileException();
    file << "@@@@@@@@@@@@@@@@\n\
@@@@@@@@@@@@@@@@\n\
.@@||@@|@|@@|@|.\n\
..|''|_||_|''|..\n\
....|_||||_|....\n\
......||||......\n\
______||||______" << std::endl;
    if (file.bad())
    {
        file.close();
        throw WorkWithFileException();
    }
    file.close();
}

const char *ShrubberyCreationForm::WorkWithFileException::what() const throw() { return ("WorkWithFileException"); }
