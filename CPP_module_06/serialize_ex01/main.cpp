/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 10:34:12 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/09/02 16:26:33 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main()
{
    Data *data = new Data;
    data->str = "str";
    data->num = 3;
	std::cout << "data addr = " << data << std::endl;
    std::cout << "data->str = " << data->str << std::endl;
    std::cout << "data->num = " << data->num << std::endl;
    uintptr_t ptr = serialize(data);
	std::cout << "serealized data addr = " << ptr << std::endl;
    Data *new_data = deserialize(ptr);
	std::cout << "deserealized data addr = " << new_data << std::endl;
    std::cout << "new_data->str = '" << new_data->str << "'" << std::endl;
    std::cout << "new_data->num = " << new_data->num << std::endl;
    delete data;
    return (0);
}
