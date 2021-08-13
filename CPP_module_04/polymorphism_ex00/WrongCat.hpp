/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 13:30:39 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/13 15:17:42 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <string>
#include "WrongAnimal.hpp"

class WrongCat : virtual public WrongAnimal
{
protected:
    std::string type;
public:
    WrongCat();
    WrongCat(const WrongCat &obj);
    WrongCat &operator = (const WrongCat &obj);
    ~WrongCat();

    void makeSound() const;
    std::string getType() const;
};

#endif
