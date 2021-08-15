/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:07:41 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/15 23:16:28 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# define N_EQUIPMENT 4

//# include "ICharacter.hpp"
#include <iostream>
#include "ICharacter.hpp"

class Character : virtual public ICharacter
{
private:
	std::string name;
	int empty_inventory_space;
	int is_full_inventory;
	int is_equipped[N_EQUIPMENT];
	AMateria *materia[N_EQUIPMENT];
public:
	Character();
	Character(std::string const &name);
	Character(const Character &obj);
	Character &operator = (const Character &obj);
	virtual ~Character();

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif
