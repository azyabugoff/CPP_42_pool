/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 19:16:53 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/10/16 17:01:37 by sesnowbi         ###   ########.fr       */
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
	std::cout << "After trying to sign: " << *tree << std::endl;
	tree->execute(worker);

	std::cout << std::endl << std::endl;

	Form *pres = new PresidentialPardonForm("Worker");
	std::cout << *pres << std::endl;
	supervisor.signForm(*pres);
	std::cout << "After trying to sign: " << *pres << std::endl;
	pres->execute(supervisor);

	std::cout << std::endl << std::endl;

	Form *robot = new RobotomyRequestForm("Worker");
	std::cout << *robot << std::endl;
	robot->beSigned(supervisor);
	std::cout << "After trying to sign: " << *robot << std::endl;
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
