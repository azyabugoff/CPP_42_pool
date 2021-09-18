/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:23:30 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/09/18 21:23:46 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() : N(0), n_added_numbers(0) {}

Span::Span(const unsigned int &N) : N(N), n_added_numbers(0) {}

Span::Span(const Span &obj) : N(obj.N), vec(obj.vec) {}

Span &Span::operator = (const Span &obj)
{
	if (this == &obj)
		return (*this);
	N = obj.N;
	vec = obj.vec;
	return (*this);
}

Span::~Span() {}

void Span::addNumber(int num)
{
	if (n_added_numbers < N)
	{
		vec.push_back(num);
		++n_added_numbers;
		std::sort(vec.begin(), vec.end());
	}
	else
		throw Span::FullSpanException();
}

void Span::addNumber(std::vector<int>::iterator st, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator it = st; it < end; ++it)
		Span::addNumber(*it);
}

unsigned int Span::shortestSpan() const
{
	if (n_added_numbers <= 1)
		throw Span::NoSpanException();
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

unsigned int Span::longestSpan() const
{
	if (n_added_numbers <= 1)
		throw Span::NoSpanException();
	int min_el = *std::min_element(vec.begin(), vec.end());
	int max_el = *std::max_element(vec.begin(), vec.end());
	return (static_cast<unsigned int>(max_el - min_el));
}

const char *Span::FullSpanException::what() const throw() { return ("FullSpanException"); }

const char *Span::NoSpanException::what() const throw() { return ("NoSpanException"); }
