/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 15:25:22 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/09/03 16:57:53 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void iter(T *arr, int size, void (*func)(T &el))
{
    for (int i = 0; i < size; ++i)
        func(arr[i]);
}

#endif
