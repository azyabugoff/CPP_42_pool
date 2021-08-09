/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 10:24:44 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/09 11:58:38 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	fix_p_val = 0;
};

Fixed::Fixed(const Fixed &obj) {
	std::cout << "Copy constructor called" << std::endl;
	this->fix_p_val = obj.getRawBits();;
};

Fixed &Fixed::operator = (const Fixed &obj){
	std::cout << "Assignation operator called" << std::endl;
	if (this == &obj)
		return (*this);
	this->fix_p_val = obj.getRawBits();
	return (*this);
};

Fixed::~Fixed(){ std::cout << "Destructor called" << std::endl; };

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fix_p_val);
}

void	Fixed::setRawBits(int const raw)
{
	fix_p_val = raw;
}
