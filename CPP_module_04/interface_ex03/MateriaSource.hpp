/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 19:47:55 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/14 22:11:16 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# define N_EQUIPMENT 4
# define N_MATERIA_TYPES 2

# include "IMateriaSource.hpp"

class MateriaSource : virtual public IMateriaSource
{
private:
	std::string known_types[N_MATERIA_TYPES];
	int empty_source_space;
	int is_full_source;
	AMateria *source[N_EQUIPMENT];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &obj);
	MateriaSource &operator = (const MateriaSource &obj);
	~MateriaSource();

	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const & type);
};

#endif
