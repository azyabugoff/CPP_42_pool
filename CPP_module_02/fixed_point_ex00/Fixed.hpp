/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 10:24:36 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/09 11:51:47 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					fix_p_val;
	static const int	n_fract_bits = 8;
public:
	Fixed();
	Fixed(const Fixed &obj);
	Fixed &operator	= (const Fixed &obj);
	int	getRawBits() const;
	void setRawBits(int const raw); 
	~Fixed();
};

#endif
