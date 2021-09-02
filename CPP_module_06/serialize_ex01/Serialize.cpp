/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:45:31 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/09/02 15:48:22 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

uintptr_t serialize(Data* ptr) { return (reinterpret_cast<uintptr_t>(ptr)); }

Data *deserialize(uintptr_t raw) { return (reinterpret_cast<Data *>(raw)); }
