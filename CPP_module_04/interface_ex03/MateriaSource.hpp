/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 19:47:55 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/15 23:37:24 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# define N_EQUIPMENT 4
# define N_MATERIA_TYPES 2

//# include "IMateriaSource.hpp"
#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : virtual public IMateriaSource
{
private:
	int empty_source_space;
	int is_full_source;
	AMateria *source[N_EQUIPMENT];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &obj);
	MateriaSource &operator = (const MateriaSource &obj);
	virtual ~MateriaSource();

	virtual void learnMateria(AMateria *m);
	virtual AMateria* createMateria(std::string const & type);
};

#endif
