/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 21:35:46 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/09/03 14:48:45 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void    swap(T &arg1, T &arg2) { T tmp = arg1; arg1 = arg2; arg2 = tmp; }

template<typename T>
const T &min(const T &arg1, const T &arg2) { return ((arg1 <= arg2 ? arg1 : arg2)); }

template<typename T>
const T &max(const T &arg1, const T &arg2) { return ((arg1 >= arg2 ? arg1 : arg2)); }

#endif
