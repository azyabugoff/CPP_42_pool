/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 22:14:05 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/08 13:34:53 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(){};

Karen::~Karen(){};

void    Karen::debug()
{
    std::cout << "[ DEBUG ]" << std::endl << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void    Karen::info()
{
    std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void    Karen::warning()
{
    std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void    Karen::error()
{
    std::cout << "[ ERROR ]" << std::endl << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void    Karen::outofrange()
{
    std::cout << "NON-EXISTENT COMMAND" << std::endl;
}

void    Karen::complain(std::string level)
{
    std::string lvls[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int         size_lvls = (int)(sizeof(lvls) / sizeof(lvls[0]));
    void        (Karen::*action[])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error, &Karen::outofrange};
    int         ind = 0;

    while (ind < size_lvls && level != lvls[ind])
        ++ind;
    (this->*(action[ind]))();
}
