/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 16:27:39 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/14 22:10:45 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <string>
# include "AMateria.hpp"

class Ice : virtual public AMateria
{
private:
	std::string type;
public:
	Ice();
	Ice(std::string const & type);
	Ice(const Ice &obj);
	Ice &operator = (const Ice &obj);
	~Ice();

	std::string const & getType() const;
	Ice* clone() const;
	void use(ICharacter& target);
};

#endif
