/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 10:24:36 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/11 23:32:25 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					fix_p_val;
	static const int	n_fract_bits = 8;
public:
	Fixed();
	Fixed(const Fixed &obj);
	Fixed(const int val);
	Fixed(const float val);
	Fixed &operator	= (const Fixed &obj);
	bool operator == (const Fixed &obj) const;
	bool operator < (const Fixed &obj) const;
	bool operator <= (const Fixed &obj) const;
	bool operator > (const Fixed &obj) const;
	bool operator >= (const Fixed &obj) const;
	bool operator != (const Fixed &obj) const;
	Fixed operator + (const Fixed &obj) const;
	Fixed operator - (const Fixed &obj) const;
	Fixed operator * (const Fixed &obj) const;
	Fixed operator / (const Fixed &obj) const;
	Fixed &operator ++ ();
	Fixed operator ++ (int);
	Fixed &operator -- ();
	Fixed operator -- (int);
	static Fixed &min(Fixed &obj1, Fixed &obj2);
	static Fixed &max(Fixed &obj1, Fixed &obj2);
	static const Fixed &min(Fixed const &obj1, Fixed const &obj2);
	static const Fixed &max(Fixed const &obj1, Fixed const &obj2);
	int	getRawBits() const;
	void setRawBits(int const raw);
	int toInt() const;
	float toFloat() const;
	~Fixed();
};

std::ostream &operator << (std::ostream &out, const Fixed &obj);

#endif
