/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 12:35:54 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/12 18:52:41 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
protected:
    std::string name;
    int         hit_pts;
    int         energy_pts;
    int         damage;
public:
    ClapTrap();
    ClapTrap(std::string const name);
    ClapTrap(const ClapTrap &obj);
    ClapTrap &operator	= (const ClapTrap &obj);
    ~ClapTrap();

    std::string getName() const;
    int getHP() const;
    int getEnergy() const;
    int getDamage() const;

    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif
