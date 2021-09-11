/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:23:30 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/09/12 01:28:41 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

span::span() : N(0), n_added_numbers(0) {}

span::span(const unsigned int &N) : N(N), n_added_numbers(0) {}

span::span(const span &obj) : N(obj.N), vec(obj.vec) {}

span &span::operator = (const span &obj)
{
	if (this == &obj)
		return (*this);
	N = obj.N;
	vec = obj.vec;
	return (*this);
}

span::~span() {}

void span::addNumber(int num)
{
	if (n_added_numbers < N)
	{
		vec.push_back(num);
		++n_added_numbers;
		std::sort(vec.begin(), vec.end());
	}
	else
		throw span::FullSpanException();
}

unsigned int span::shortestSpan() const
{
	if (n_added_numbers <= 1)
		throw span::NoSpanException();
	std::vector<int>::const_iterator it;
	unsigned int shortest_span = static_cast<unsigned int>(vec[1] - vec[0]);
	unsigned int cur_span = 0;
	for (it = vec.begin(); it < vec.end() - 1; ++it)
	{
		if (it + 1 == vec.end())
			break ;
		cur_span = static_cast<unsigned int>(*(it + 1) - *it);
		if (cur_span < shortest_span)
			shortest_span = cur_span;
	}
	return (shortest_span);
}

unsigned int span::longestSpan() const
{
	if (n_added_numbers <= 1)
		throw span::NoSpanException();
	int min_el = *std::min_element(vec.begin(), vec.end());
	int max_el = *std::max_element(vec.begin(), vec.end());
	return (static_cast<unsigned int>(max_el - min_el));
}

const char *span::FullSpanException::what() const throw() { return ("FullSpanException"); }

const char *span::NoSpanException::what() const throw() { return ("NoSpanException"); }
