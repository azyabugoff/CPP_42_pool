/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 19:00:36 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/09/02 19:41:16 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

int main()
{
    srand((unsigned)time(NULL));

    C known_class_C;
    std::cout << "Check than functions can identify hand-made class C" << std::endl;
    identify(&known_class_C);
    identify(known_class_C);

    std::cout << "New random class" << std::endl;
    Base *cl1 = generate();
    identify(cl1);
    identify(*cl1);
    std::cout << "New random class" << std::endl;
    Base *cl2 = generate();
    identify(cl2);
    identify(*cl2);
    std::cout << "New random class" << std::endl;
    Base *cl3 = generate();
    identify(cl3);
    identify(*cl3);

    delete cl1;
    delete cl2;
    delete cl3;
    return (0);
}
