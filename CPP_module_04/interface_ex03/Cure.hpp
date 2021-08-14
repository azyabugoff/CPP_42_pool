/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 16:27:39 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/14 22:10:26 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <string>
# include "AMateria.hpp"

class Cure : virtual public AMateria
{
private:
	std::string type;
public:
	Cure();
	Cure(std::string const & type);
	Cure(const Cure &obj);
	Cure &operator = (const Cure &obj);
	~Cure();

	std::string const & getType() const;
	Cure* clone() const;
	void use(ICharacter& target);
};

#endif
