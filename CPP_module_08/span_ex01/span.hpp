/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:21:28 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/09/10 21:56:47 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <string>
# include <vector>

class span
{
private:
	int N;
	std::vector<int> vec;
public:
	span();
	span(int N);
	span(const span &obj);
	span &operator = (const span &obj);
	~span();

	int	size() const;
	std::vector<int> getVec() const;
};

#endif
