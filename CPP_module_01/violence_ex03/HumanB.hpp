/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 10:31:58 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/07 15:16:10 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon      *weapon = NULL;
public:
    HumanB(std::string const& name);
    HumanB(std::string const& name, Weapon *weapon);
    void    setWeapon(Weapon &weapon);
    void    attack();
    ~HumanB() = default;
};

#endif
