/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:07:41 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/14 22:09:58 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# define N_EQUIPMENT 4

# include "ICharacter.hpp"

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
	~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif
