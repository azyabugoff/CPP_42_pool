/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 20:20:39 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/14 00:01:53 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int		main()
{
	Animal *animal1 = new Cat();
	std::cout << std::endl;
	Animal *animal2 = new Dog();
	//std::cout << std::endl;
	//Animal *animal3 = new Animal();
	//delete animal3;
	std::cout << std::endl;
	delete animal1;
	std::cout << std::endl;
	delete animal2;
	return (0);
}
