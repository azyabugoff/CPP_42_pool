/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 13:30:39 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/13 23:55:48 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(const Animal &obj);
    Animal &operator = (const Animal &obj);
    virtual ~Animal();

    virtual void makeSound() const = 0;
    virtual std::string getType() const;
};

#endif
