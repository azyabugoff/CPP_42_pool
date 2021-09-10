/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:23:30 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/09/10 21:55:07 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

span::span() : N(0), vec(N) {}

span::span(int N) : N(N), vec(N) {}

span::span(const span &obj) : N(obj.N), vec(obj.vec) {}

span &span::operator = (const span &obj)
{
	if (this == &obj)
		return (*this);
	N = obj.N;
	vec = obj.vec;
	return (*this);
}

int span::size() const { return (N); }

std::vector<int> span::getVec() const { return (vec); }
