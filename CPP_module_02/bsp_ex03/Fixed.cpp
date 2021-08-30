/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 10:24:44 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/11 23:32:50 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){ fix_p_val = 0; };

Fixed::Fixed(const Fixed &obj) { this->fix_p_val = obj.getRawBits(); };

Fixed::Fixed(const int val) { fix_p_val = val << n_fract_bits; };

Fixed::Fixed(const float val) { fix_p_val = (int)roundf(val * (1 << n_fract_bits)); };

Fixed &Fixed::operator = (const Fixed &obj){
	if (this == &obj)
		return (*this);
	this->fix_p_val = obj.getRawBits();
	return (*this);
}

bool Fixed::operator == (const Fixed &obj) const { return (fix_p_val == obj.fix_p_val); }

bool Fixed::operator < (const Fixed &obj) const { return (fix_p_val < obj.fix_p_val); }

bool Fixed::operator <= (const Fixed &obj) const { return (fix_p_val <= obj.fix_p_val); }

bool Fixed::operator > (const Fixed &obj) const { return (fix_p_val > obj.fix_p_val); }

bool Fixed::operator >= (const Fixed &obj) const { return (fix_p_val >= obj.fix_p_val); }

bool Fixed::operator != (const Fixed &obj) const { return (fix_p_val != obj.fix_p_val); }

Fixed Fixed::operator + (const Fixed &obj) const
{
	Fixed	ret;

	ret.setRawBits(this->fix_p_val + obj.getRawBits());
	return (ret);
}

Fixed Fixed::operator - (const Fixed &obj) const
{
	Fixed	ret;

	ret.setRawBits(this->fix_p_val - obj.getRawBits());
	return (ret);
}

Fixed Fixed::operator * (const Fixed &obj) const
{
	Fixed	ret;

	ret.setRawBits((this->fix_p_val * obj.getRawBits()) >> ret.n_fract_bits);
	return (ret);
}

Fixed Fixed::operator / (const Fixed &obj) const
{
	Fixed	ret;

	ret.setRawBits((this->fix_p_val << ret.n_fract_bits) / obj.getRawBits());
	return (ret);
}

Fixed &Fixed::operator ++ ()
{
	++this->fix_p_val;
	return (*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed copy(*this);
	operator ++();
	return (copy);
}

Fixed &Fixed::operator -- ()
{
	--this->fix_p_val;
	return (*this);
}

Fixed Fixed::operator -- (int)
{
	Fixed copy(*this);
	operator --();
	return (copy);
}

Fixed &Fixed::min(Fixed &obj1, Fixed &obj2) { return (obj1 < obj2 ? obj1 : obj2); }

Fixed &Fixed::max(Fixed &obj1, Fixed &obj2) { return (obj1 > obj2 ? obj1 : obj2); }

const Fixed &Fixed::min(const Fixed &obj1, const Fixed &obj2) { return (obj1 < obj2 ? obj1 : obj2); }

const Fixed &Fixed::max(const Fixed &obj1, const Fixed &obj2) { return (obj1 > obj2 ? obj1 : obj2); }

Fixed::~Fixed(){};

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
