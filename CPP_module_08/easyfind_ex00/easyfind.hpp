/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 23:13:08 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/09/08 23:15:39 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <exception>

template <template <typename, typename> class T>
typename T<int, std::allocator<int> >::const_iterator easyfind(T<int, std::allocator<int>> &container, int num)
{
    typename T<int, std::allocator<int>>::iterator it = std::find(container.begin(), container.end(), num);
    if (container.begin() == container.end() || !(*it))
        throw std::exception();
    else
        return (it);
}

#endif
