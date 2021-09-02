/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 17:51:12 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/09/02 02:58:50 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() : str("0"), str_len(1), precision(0) { Convert::recognizeType(); }

Convert::Convert(const std::string &str) : str(str), str_len(str.length()), precision(0) { Convert::recognizeType(); }

Convert::Convert(const Convert &obj) : str(obj.str), str_len(obj.str_len), type(obj.type), precision(0) {}

Convert &Convert::operator = (const Convert &obj)
{
    if (this == &obj)
        return (*this);
    this->str = obj.str;
    this->str_len = obj.str_len;
    this->precision = obj.precision;
    this->type = obj.type;
    return (*this);
}

Convert::~Convert() {}

std::string Convert::getString() const { return (this->str); }

int Convert::getPrecision() const { return (this->precision); }

const char *Convert::ImpossibleToConvertException::what() const throw() { return ("impossible"); }

const char *Convert::NotDisplayableCharException::what() const throw() { return ("Non displayable"); }

int Convert::recognizeLimits()
{
    if (str == "nan")
    {
        type = isDouble;
        from_limit = nan;
        return (1);
    }
    else if (str == "nanf")
    {
        type = isFloat;
        from_limit = nanf;
        return (1);
    }
    else if (str == "+inf")
    {
        type = isDouble;
        from_limit = posInf;
        return (1);
    }
    else if (str == "+inff")
    {
        type = isFloat;
        from_limit = posInff;
        return (1);
    }
    else if (str == "-inf")
    {
        type = isDouble;
        from_limit = negInf;
        return (1);
    }
    else if (str == "-inff")
    {
        type = isFloat;
        from_limit = negInff;
        return (1);
    }
    else
        from_limit = notInLims;
    return (0);
}

void Convert::recognizeType()
{
    int n_dots = 0;
    int dot_ind = 0;

    if (Convert::recognizeLimits())
        return ;
    if (str_len == 0)
    {
        type = isInvalidType;
        return ;
    }
    if (str_len == 1 && (str[0] > '9' || str[0] < '0'))
    {
        if (!isprint(str[0]))
            type = isNonDisplayableChar;
        else
            type = isChar;
        return ;
    }
    if (str[0] == '.')
    {
        type = isInvalidType;
        return ;
    }
    for (int i = (str[0] == '-') ? 1 : 0; i < str_len; ++i)
    {
        if (i == str_len - 1 && str_len > 1 && str[i] == 'f' && n_dots)
        {
            precision = str_len - 1 - dot_ind - 1;
            type = isFloat;
            return ;
        }
        if (str[i] == '.')
        {
            if (!n_dots)
            {
                ++n_dots;
                dot_ind = i;
                continue ;
            }
            else
            {
                type = isInvalidType;
                return ;
            }
        }
        else if (str[i] < '0' || str[i] > '9')
        {
            type = isInvalidType;
            return ;
        }
    }
    if (n_dots)
    {
        precision = str_len - dot_ind - 1;
        type = isDouble;
    }
    else
        type = isInt;
}

char Convert::toChar() const
{
    std::istringstream ss;

    if (type == isNonDisplayableChar)
        throw Convert::NotDisplayableCharException();
    else if (type == isInvalidType)
        throw Convert::ImpossibleToConvertException();
    if (type == isChar)
        return (str[0]);
    else if (type == isInt)
    {
        int c;
        ss.str(str);
        if (!(ss >> c))
            throw Convert::ImpossibleToConvertException();
        if (c > 127 || c < 0 || !isprint(c))
            throw Convert::NotDisplayableCharException();
        return (static_cast<char>(c));
    }
    else if (type == isDouble)
    {
        double c;
        ss.str(str);
        if (!(ss >> c))
            throw Convert::ImpossibleToConvertException();
        if (c > 127 || c < 0 || !isprint(c))
            throw Convert::NotDisplayableCharException();
        return (static_cast<char>(c));
    }
    else if (type == isFloat)
    {
        float c;
        ss.str(str);
        if (!(ss >> c))
            throw Convert::ImpossibleToConvertException();
        if (c > 127 || c < 0 || !isprint(c))
            throw Convert::NotDisplayableCharException();
        return (static_cast<char>(c));
    }
    return ('0');
}

int Convert::toInt() const
{
    std::istringstream ss;

    if (type == isInvalidType)
        throw Convert::ImpossibleToConvertException();
    if (type == isChar || type == isNonDisplayableChar)
        return (static_cast<int>(str[0]));
    else if (type == isInt)
    {
        int num;
        ss.str(str);
        if (!(ss >> num))
            throw Convert::ImpossibleToConvertException();
        return (num);
    }
    else if (type == isDouble)
    {
        double num;
        ss.str(str);
        if (!(ss >> num))
            throw Convert::ImpossibleToConvertException();
        return (static_cast<int>(num));
    }
    else if (type == isFloat)
    {
        float num;
        ss.str(str);
        if (!(ss >> num))
            throw Convert::ImpossibleToConvertException();
        return (static_cast<int>(num));
    }
    return (0);
}

double Convert::toDouble() const
{
    std::istringstream ss;

    if (from_limit == nan || from_limit == nanf)
        return (std::numeric_limits<double>::quiet_NaN());
    else if (from_limit == posInf || from_limit == posInff)
        return (std::numeric_limits<double>::infinity());
    else if (from_limit == negInf || from_limit == negInff)
        return (-std::numeric_limits<double>::infinity());
    if (type == isInvalidType)
        throw Convert::ImpossibleToConvertException();
    if (type == isChar || type == isNonDisplayableChar)
        return (static_cast<double>(str[0]));
    else if (type == isInt)
    {
        int num;
        ss.str(str);
        if (!(ss >> num))
            throw Convert::ImpossibleToConvertException();
        return (static_cast<double>(num));
    }
    else if (type == isDouble)
    {
        double num;
        ss.str(str);
        if (!(ss >> num))
            throw Convert::ImpossibleToConvertException();
        return (static_cast<double>(num));
    }
    else if (type == isFloat)
    {
        float num;
        ss.str(str);
        if (!(ss >> num))
            throw Convert::ImpossibleToConvertException();
        return (static_cast<double>(num));
    }
    return (0.0);
}

float Convert::toFloat() const
{
    std::istringstream ss;

    if (from_limit == nan || from_limit == nanf)
        return (std::numeric_limits<float>::quiet_NaN());
    else if (from_limit == posInf || from_limit == posInff)
        return (std::numeric_limits<float>::infinity());
    else if (from_limit == negInf || from_limit == negInff)
        return (-std::numeric_limits<float>::infinity());
    if (type == isInvalidType)
        throw Convert::ImpossibleToConvertException();
    if (type == isChar || type == isNonDisplayableChar)
        return (static_cast<float>(str[0]));
    else if (type == isInt)
    {
        int num;
        ss.str(str);
        if (!(ss >> num))
            throw Convert::ImpossibleToConvertException();
        return (static_cast<float>(num));
    }
    else if (type == isDouble)
    {
        double num;
        ss.str(str);
        if (!(ss >> num))
            throw Convert::ImpossibleToConvertException();
        return (static_cast<float>(num));
    }
    else if (type == isFloat)
    {
        float num;
        ss.str(str);
        if (!(ss >> num))
            throw Convert::ImpossibleToConvertException();
        return (static_cast<float>(num));
    }
    return (0.0f);
}

std::ostream &operator << (std::ostream &out, const Convert &obj)
{
    out << "char: ";
    try { char c = obj.toChar(); out << "'" << c << "'" << std::endl; }
    catch (Convert::ImpossibleToConvertException &e) { out << e.what() << std:: endl; }
    catch (Convert::NotDisplayableCharException &e) { out << e.what() << std:: endl; }

    out << "int: ";
    try { out << obj.toInt() << std::endl; }
    catch (Convert::ImpossibleToConvertException &e) { out << e.what() << std:: endl; }

    out << std::fixed << std::setprecision((obj.getPrecision() > 1) ? obj.getPrecision() : 1);
    out << "float: ";
    try{ out << obj.toFloat() << "f" << std::endl; }
    catch (Convert::ImpossibleToConvertException &e) { out << e.what() << std:: endl; }

    out << "double: ";
    try { out << obj.toDouble(); }
    catch (Convert::ImpossibleToConvertException &e) { out << e.what(); }
    return (out);
}
