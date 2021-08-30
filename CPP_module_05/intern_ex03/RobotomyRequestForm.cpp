/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 19:22:37 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/29 22:56:12 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : Form(obj.getName(), obj.getGradeSign(), obj.getGradeExec()), target(obj.getTarget()) {}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &obj)
{
	if (this == &obj)
		return (*this);
	Form::operator=(obj);
	this->target = obj.getTarget();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

const std::string &RobotomyRequestForm::getTarget() const { return (this->target); }

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
    std::cout << "VVVVZZZZHHHH...\t";
	if (rand() % 2 == 0)
        std::cout << this->target << " has been robotomized successfully" << std::endl;
    else
        std::cout << this->target << " robotomization failed" << std::endl; 
}
