/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 19:16:53 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/30 14:46:23 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	srand(time(NULL));

	Bureaucrat supervisor("Supervisor", 1);
	std::cout << supervisor << std::endl;
	Bureaucrat worker("Worker", 25);
	std::cout << worker << std::endl;

	Form *tree = new ShrubberyCreationForm("garden");
	std::cout << *tree << std::endl;
	tree->beSigned(supervisor);
	tree->execute(worker);

	Form *pres = new PresidentialPardonForm("Worker");
	std::cout << *pres << std::endl;
	supervisor.signForm(*pres);
	pres->execute(supervisor);

	Form *robot = new RobotomyRequestForm("Worker");
	std::cout << *robot << std::endl;
	robot->beSigned(supervisor);
	robot->execute(worker);
	worker.executeForm(*robot);

	std::cout << std::endl << std::endl;

	try
	{
		worker.executeForm(*pres);
	}
	catch(std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;

	try
	{
		RobotomyRequestForm robot("Robot");
		std::cout << robot << std::endl;
		robot.execute(supervisor);
	}
	catch(std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;

	try
	{
		PresidentialPardonForm pres("Worker");
		std::cout << pres << std::endl;
		supervisor.signForm(pres);
		pres.execute(worker);
	}
	catch(std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << std::endl;

	try
	{
		PresidentialPardonForm pres("Worker");
		std::cout << pres << std::endl;
		supervisor.signForm(pres);
		worker.executeForm(pres);
	}
	catch(std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	delete tree;
	delete pres;
	delete robot;

	return (0);
}
