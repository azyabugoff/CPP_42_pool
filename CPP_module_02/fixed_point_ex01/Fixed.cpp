/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 10:24:44 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/11 18:55:01 by sesnowbi         ###   ########.fr       */
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

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	fix_p_val = val << n_fract_bits;
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	fix_p_val = (int)roundf(val * (1 << n_fract_bits));
}

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
	return (fix_p_val);
}

void	Fixed::setRawBits(int const raw)
{
	fix_p_val = raw;
}

int	Fixed::toInt() const
{
	return (fix_p_val >> n_fract_bits);
}

float	Fixed::toFloat() const
{
	return (float)((float)fix_p_val / (float)(1 << n_fract_bits));
}

std::ostream &operator << (std::ostream &out, const Fixed &obj)
{
    out << obj.toFloat();
    return (out);
}
