/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 20:16:46 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/15 23:37:17 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	empty_source_space = N_EQUIPMENT;
	is_full_source = 0;
	for (int i = 0; i < N_EQUIPMENT; ++i)
		source[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	empty_source_space = obj.empty_source_space;
	is_full_source = obj.is_full_source;
	for (int i = 0; i < N_EQUIPMENT; ++i)
	{
		if (obj.source[i] != nullptr)
			source[i] = obj.source[i]->clone();
	}
}

MateriaSource &MateriaSource::operator = (const MateriaSource &obj)
{
	if (this == &obj)
		return (*this);
	empty_source_space = obj.empty_source_space;
	is_full_source = obj.is_full_source;
	for (int i = 0; i < N_EQUIPMENT; ++i)
	{
		if (source[i] != nullptr)
			delete source[i];
		source[i] = nullptr;
		if (obj.source[i] != nullptr)
			source[i] = obj.source[i]->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < N_EQUIPMENT; ++i)
	{
		if (source[i] != nullptr)
			delete source[i];
	}
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (is_full_source)
		return ;
	for (int i = 0; i < N_EQUIPMENT; ++i)
	{
		if (source[i] == nullptr)
		{
			source[i] = m->clone();
			--empty_source_space;
			if (!empty_source_space)
				is_full_source = 1;
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	AMateria *ret = 0;

	for (int i = 0; i < N_EQUIPMENT; ++i)
	{
		if (source[i] != nullptr && source[i]->getType() == type)
		{
			ret = source[i]->clone();
			break ;
		}
	}
	return (ret);
}
