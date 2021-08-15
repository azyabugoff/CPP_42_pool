/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 16:27:39 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/15 23:26:25 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

//# include <string>
//# include "AMateria.hpp"
# include "AMateria.hpp"
# include <iostream>

class Cure : virtual public AMateria
{
public:
	Cure();
	//Cure(std::string const & type);
	Cure(const Cure &obj);
	Cure &operator = (const Cure &obj);
	~Cure();

	//std::string const & getType() const;
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
