/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 21:40:25 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/09/26 22:35:57 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <list>
#include <iostream>

int main()
{
	std::cout << "\n--MSTACK--\n" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top = " << mstack.top() << std::endl;
	std::cout << "pop();" << std::endl;
	mstack.pop();
	std::cout << "new size = " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "mstack els:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "\n--STACK--\n" << std::endl;
	std::cout << "stack els:" << std::endl;
	MutantStack<int>::iterator it1 = mstack.begin();
	MutantStack<int>::iterator ite1 = mstack.end();
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}
	std::cout << "\n--LIST--\n" << std::endl;
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);
	std::cout << "top = " << lst.back() << std::endl;
	std::cout << "pop();" << std::endl;
	lst.pop_back();
	std::cout << "new size = " << lst.size() << std::endl;
	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(0);
	std::cout << "list els:" << std::endl;
	std::list<int>::iterator it2 = lst.begin();
	std::list<int>::iterator ite2 = lst.end();
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		++it2;
	}
	return 0;
}
