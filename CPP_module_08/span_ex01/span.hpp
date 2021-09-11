/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:21:28 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/09/12 01:21:17 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <cmath>
# include <exception>
# include <algorithm>

class span
{
private:
	unsigned int N;
    unsigned int n_added_numbers;
	std::vector<int> vec;
	span();
public:
	span(const unsigned int &N);
	span(const span &obj);
	span &operator = (const span &obj);
	~span();

    void addNumber(int num);
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
