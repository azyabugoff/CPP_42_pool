/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 22:14:17 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/08/08 00:49:16 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

class Karen
{
private:
    void    debug();
    void    info();
    void    warning();
    void    error();
    void    insignificant();
public:
    Karen();
    void    complain(std::string level);
    ~Karen() = default;
};

#endif
