/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 12:33:20 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/13 10:24:24 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a("Dummy");
    a.attack("Bob");
    a.takeDamage(5);
    a.beRepaired(5);
    a.highFivesGuys();
    a.guardGate();
    a.whoAmI();
    return (0);
}
