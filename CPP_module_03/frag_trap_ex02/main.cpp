/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 12:33:20 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/12 20:11:51 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap a("Dummy");
    a.attack("Bob");
    a.takeDamage(5);
    a.beRepaired(5);
    a.highFivesGuys();
    return (0);
}
