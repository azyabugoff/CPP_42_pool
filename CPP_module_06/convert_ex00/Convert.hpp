/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 15:21:03 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/09/02 02:09:42 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <exception>
# include <limits>
# include <iomanip>

class Convert
{
private:
    std::string str;
    int str_len;
    int type;
    int precision;
    int from_limit;

    enum Lims{ notInLims, nan, nanf, posInf, posInff, negInf, negInff };
    enum Type{ isChar, isNonDisplayableChar, isInt, isFloat, isDouble, isInvalidType };

    Convert();
    int     recognizeLimits();
    void    recognizeType();

public:
    Convert(const std::string &str);
    Convert(const Convert &obj);
    Convert &operator = (const Convert &obj);
    ~Convert();

    std::string getString() const;
    int     getPrecision() const;

    char toChar() const;
    int toInt() const;
    float toFloat() const;
    double toDouble() const;

    class ImpossibleToConvertException : public std::exception
    {
    public:
        const char *what() const throw();
    };

    class NotDisplayableCharException : public std::exception
    {
    public:
        const char *what() const throw();
    };
};

std::ostream &operator << (std::ostream &out, const Convert &obj);

#endif
