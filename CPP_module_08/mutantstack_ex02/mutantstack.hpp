/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 21:41:45 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/09/26 22:13:39 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>() {};
	MutantStack(const MutantStack &obj) : std::stack<T>(obj) {};
	MutantStack &operator = (const MutantStack &obj)
	{
		if (this == &obj)
			return (*this);
		std::stack<T>::operator = (obj);
		return (*this);
	};
	virtual ~MutantStack() {};

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin() { return (std::stack<T>::c.begin()); }
	iterator end() { return (std::stack<T>::c.end()); }
};

# include "mutantstack.cpp"

#endif
