/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 22:14:05 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/08 01:03:30 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(){};

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

void    Karen::insignificant()
{
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void    Karen::complain(std::string level)
{
    std::string lvls[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int         size_lvls = (int)(sizeof(lvls) / sizeof(lvls[0]));
    void        (Karen::*action[])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error, &Karen::insignificant};
    int         ind = 0;

    while (ind < size_lvls && level != lvls[ind])
        ++ind;
    switch (ind)
    {
    case 0:
        (this->*(action[0]))();
        std::cout << std::endl;
    case 1:
        (this->*(action[1]))();
        std::cout << std::endl;
    case 2:
        (this->*(action[2]))();
        std::cout << std::endl;
    case 3:
        (this->*(action[3]))();
        std::cout << std::endl;
        break ;
    default:
        (this->*(action[4]))();
        std::cout << std::endl;
        break ;
    }
}
