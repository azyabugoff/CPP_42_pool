/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 13:30:39 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/13 21:16:17 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal
{
protected:
    std::string type;
    Brain *brain;
public:
    Dog();
    Dog(const Dog &obj);
    Dog &operator = (const Dog &obj);
    virtual ~Dog();

    virtual void makeSound() const;
    std::string getType() const;
    Brain *getBrain() const;
};

#endif
