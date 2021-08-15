/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 16:27:39 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/15 23:27:46 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

//# include <string>
# include "AMateria.hpp"

class Ice : virtual public AMateria
{
public:
	Ice();
	//Ice(std::string const & type);
	Ice(const Ice &obj);
	Ice &operator = (const Ice &obj);
	~Ice();

	//std::string const & getType() const;
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
