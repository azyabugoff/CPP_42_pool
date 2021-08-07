/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 19:16:21 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/07 01:00:48 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class Zombie
{
private:
    std::string name = "Unnamed zombie";
public:
    Zombie();
    Zombie(std::string name);
    void    set_name(std::string name);
    void    announce();
    ~Zombie();
};

Zombie *zombieHorde(int N, std::string name);

#endif