/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 01:30:01 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/07 02:01:42 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string	str = "HI THIS IS BRAIN";
	std::string	*str_ptr = &str;
	std::string	&str_ref = str;

	std::cout << "str address: " << &str << std::endl;
	std::cout << "str address using PTR: " << str_ptr << std::endl;
	std::cout << "str address using REF: " << &str_ref << std::endl;
	std::cout << "str using PTR: " << *str_ptr << std::endl;
	std::cout << "str using REF: " << str_ref << std::endl;
}
