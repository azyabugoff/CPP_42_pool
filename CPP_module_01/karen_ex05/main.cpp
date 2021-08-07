/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 22:15:43 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/08 00:19:53 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
    Karen   k;

    k.complain("DEBUG");
    k.complain("INFO");
    k.complain("WARNING");
    k.complain("ERROR");
    k.complain("KAREN");
    return (0);
}
