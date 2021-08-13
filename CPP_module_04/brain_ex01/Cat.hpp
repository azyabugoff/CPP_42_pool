/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 13:30:39 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/13 21:16:30 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal
{
protected:
    std::string type;
    Brain *brain;
public:
    Cat();
    Cat(const Cat &obj);
    Cat &operator = (const Cat &obj);
    virtual ~Cat();

    virtual void makeSound() const;
    std::string getType() const;
    Brain *getBrain() const;
};

#endif
