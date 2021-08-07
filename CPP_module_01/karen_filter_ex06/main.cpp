/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 22:15:43 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/08 00:48:13 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char *argv[])
{
    Karen   karen;

    if (argc != 2)
    {
        std::cout << "Wrong number of arguments." << std::endl;
        return (1);
    }
    karen.complain(argv[1]);
    return (0);
}
