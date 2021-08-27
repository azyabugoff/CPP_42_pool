/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 14:20:38 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/27 15:41:55 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bur1("bur1", 10);
		std::cout << bur1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}

	try
	{
		Bureaucrat bur2("bur2", 0); //увеличить на тестах
		std::cout << bur2 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}

	try
	{
		Bureaucrat bur3("bur3", 1); //увеличить на тестах
		std::cout << bur3 << std::endl;
		Bureaucrat bur4("bur4", 150);
		std::cout << bur4 << std::endl;
		bur4.increment();
		std::cout << "bur4 after increment = " << "\"" << bur4 << "\"" << std::endl;
		bur4 = bur3;
		bur4.increment();
		std::cout << "bur4 = bur3. Result after increment = " << "\"" << bur4 << "\"" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
	std::cout << "Completed successfully" << std::endl;
	return (0);
}
