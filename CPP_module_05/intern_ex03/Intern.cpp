/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:03:19 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/30 17:31:06 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form *createPresidentialPardonForm(const std::string &target) { return (new PresidentialPardonForm(target)); }

Form *createRobotomyRequestForm(const std::string &target) { return (new RobotomyRequestForm(target)); }

Form *createShrubberyCreationForm(const std::string &target) { return (new ShrubberyCreationForm(target)); }

Intern::Intern() {}

Intern::Intern(const Intern &obj) { (void)obj; }

Intern &Intern::operator = (const Intern &obj) { (void)obj; return (*this); }

Intern::~Intern() {}

Form *Intern::makeForm(const std::string &name, const std::string &target) const
{
	typedef struct names_funcs_Form
	{
		std::string name;
		Form	*(*action)(const std::string &target);
	}	formNamesFuncs;
	formNamesFuncs arr[] = {{"presidential pardon request", &createPresidentialPardonForm}, {"robotomy request", &createRobotomyRequestForm}, {"shrubbery creation request", &createShrubberyCreationForm}};
	int	arr_size = (int)sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < arr_size; ++i)
	{
		if (name == arr[i].name)
		{
			std::cout << "Intern creates " << name << std::endl;
			return (arr[i].action(target));
		}
	}
	std::cout << "Unknown form. Intern cannot handle this request" << std::endl;
	return (NULL);
}
