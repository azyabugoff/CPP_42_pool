/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 19:16:53 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/30 17:54:33 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
	Bureaucrat bur("Bur", 1);
	Form *ppf;
	Form *rrf;
	Form *scf;
	Form *uf;

	uf = someRandomIntern.makeForm("unknown request", "None");
	ppf = someRandomIntern.makeForm("presidential pardon request", "Philip");
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	scf = someRandomIntern.makeForm("shrubbery creation request", "home");

	std::cout<< std::endl << std::endl;

	bur.signForm(*ppf);
	bur.executeForm(*ppf);
	try
	{
		bur.signForm(*ppf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout<< std::endl << std::endl;

	bur.signForm(*rrf);
	bur.executeForm(*rrf);

	std::cout<< std::endl << std::endl;

	bur.signForm(*scf);
	bur.executeForm(*scf);

	delete uf;
	delete ppf;
	delete rrf;
	delete scf;

    return (0);
}
