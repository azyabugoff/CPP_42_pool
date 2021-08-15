/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:12:53 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/16 00:51:01 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

Character::Character()
{
	name = "Unnamed";
	empty_inventory_space = N_EQUIPMENT;
	is_full_inventory = 0;
	for (int i = 0; i < N_EQUIPMENT; ++i)
	{
		is_equipped[i] = 0;
		materia[i] = nullptr;
	}
}

Character::Character(std::string const &name)
{
	this->name = name;
	empty_inventory_space = N_EQUIPMENT;
	is_full_inventory = 0;
	for (int i = 0; i < N_EQUIPMENT; ++i)
	{
		is_equipped[i] = 0;
		materia[i] = nullptr;
	}
}

Character::Character(const Character &obj)
{
	name = obj.name;
	empty_inventory_space = obj.empty_inventory_space;
	is_full_inventory = obj.is_full_inventory;
	for (int i = 0; i < N_EQUIPMENT; ++i)
	{
		is_equipped[i] = obj.is_equipped[i];
		if (obj.materia[i] != nullptr)
			materia[i] = obj.materia[i]->clone();
	}
}

Character &Character::operator = (const Character &obj)
{
	if (this == &obj)
		return (*this);
	name = obj.name;
	empty_inventory_space = obj.empty_inventory_space;
	is_full_inventory = obj.is_full_inventory;
	for (int i = 0; i < N_EQUIPMENT; ++i)
	{
		is_equipped[i] = obj.is_equipped[i];
		if (materia[i] != nullptr)
			delete materia[i];
		materia[i] = nullptr;
		if (obj.materia[i] != nullptr)
			materia[i] = obj.materia[i]->clone();
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < N_EQUIPMENT; ++i)
	{
		if (materia[i] != nullptr)
			delete materia[i];
	}
}

std::string const &Character::getName() const { return (name); }

void Character::equip(AMateria* m)
{
	if (is_full_inventory)
		return ;
	for (int i = 0; i < N_EQUIPMENT; ++i)
	{
		if (!is_equipped[i])
		{
			if (materia[i] != nullptr)
				delete materia[i];
			materia[i] = m->clone();
			is_equipped[i] = 1;
			--empty_inventory_space;
			if (!empty_inventory_space)
				is_full_inventory = 1;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	if (is_equipped[idx])
	{
		is_equipped[idx] = 0;
		++empty_inventory_space;
		is_full_inventory = 0;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4)
		return ;
	if (!is_equipped[idx])
		return ;
	materia[idx]->use(target);
}
