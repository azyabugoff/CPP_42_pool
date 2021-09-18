/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:21:28 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/09/18 21:18:40 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <cmath>
# include <exception>
# include <algorithm>

class Span
{
private:
	unsigned int N;
    unsigned int n_added_numbers;
	std::vector<int> vec;
	Span();
public:
	Span(const unsigned int &N);
	Span(const Span &obj);
	Span &operator = (const Span &obj);
	~Span();

    void addNumber(int num);
    void addNumber(std::vector<int>::iterator st, std::vector<int>::iterator end);
    unsigned int shortestSpan() const;
    unsigned int longestSpan() const;

    class FullSpanException : public std::exception
    {
        const char *what() const throw();
    };

    class NoSpanException : public std::exception
    {
        const char *what() const throw();
    };
};

#endif
