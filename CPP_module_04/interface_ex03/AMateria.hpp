/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 15:20:35 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/16 01:00:18 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

//# include <string>
//# include "ICharacter.hpp"
#include <iostream>
class AMateria;
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string type;
public:
	//AMateria();
	AMateria(std::string const & type);
	//AMateria(const AMateria &obj);
	//AMateria &operator = (const AMateria &obj);
	virtual ~AMateria();

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif
