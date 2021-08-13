/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 20:20:39 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/13 23:46:09 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int		main()
{
	std::cout << "============ test1 ===========" << std::endl;
	Animal *animals[10] =
	{
		new Cat(),
		new Cat(),
		new Cat(),
		new Cat(),
		new Cat(),
		new Dog(),
		new Dog(),
		new Dog(),
		new Dog(),
		new Dog()
	};
	for (int i = 0; i < 10; ++i)
		animals[i]->makeSound();
	for (int i = 0; i < 10; ++i)
		delete animals[i];

	std::cout << "============= test2 : deep Copy ===========" << std::endl;
	{
		Dog Doge;
		Dog copy_Doge(Doge);
		Cat Kitty;
		Cat copy_Kitty(Kitty);

		std::cout << "<Doge's address>" << std::endl;
		std::cout << Doge.getBrain() << std::endl;
		std::cout << "<Copy Doge's address>" << std::endl;
		std::cout << copy_Doge.getBrain() << std::endl << std::endl;
		std::cout << "<Kitty's address>" << std::endl;
		std::cout << Kitty.getBrain() << std::endl;
		std::cout << "<Copy Kitty's address" << std::endl;
		std::cout << copy_Kitty.getBrain() << std::endl<<std::endl;
	}
	std::cout << "============= test3 : brain test ===========" << std::endl;
	{
		Dog Doge;
		Dog copy_Doge;

		Doge.getBrain()->setIdea(0, "test1");
		Doge.getBrain()->setIdea(1, "test2");
		std::cout << Doge.getBrain()->getIdea(0) << std::endl;
		std::cout << Doge.getBrain()->getIdea(1) << std::endl;
		copy_Doge = Doge;
		copy_Doge.getBrain()->setIdea(0, "test1");
		copy_Doge.getBrain()->setIdea(1, "test2");
		std::cout << Doge.getBrain()->getIdea(0) << std::endl;
		std::cout << Doge.getBrain()->getIdea(1) << std::endl;
	}
	return (0);
}
