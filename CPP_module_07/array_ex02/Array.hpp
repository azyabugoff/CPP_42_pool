/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sesnowbi <sesnowbi@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 20:29:51 by sesnowbi          #+#    #+#             */
/*   Updated: 2021/09/03 22:00:04 by sesnowbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template<class T>
class Array
{
private:
    T *arr;
    int _size;
public:
    Array() : arr(new T[0]), _size(0) {};
    Array(unsigned int n) : arr(new T[n]), _size(static_cast<int>(n)) {};
    Array(const Array &obj)
    {
        arr = new T[obj._size];
        for (int i = 0; i < obj._size; ++i)
            arr[i] = obj.arr[i];
        _size = obj._size;
    }
    Array &operator = (const Array &obj)
    {
        if (this == &obj)
            return (*this);
        if (_size > 0)
            delete[] arr;
        arr = new T[obj._size];
        for (int i = 0; i < obj._size; ++i)
            arr[i] = obj.arr[i];
        _size = obj._size;
        return (*this);
    }
    ~Array() { delete[] arr; };

    int size() const { return (_size); }
    T &operator [] (unsigned int i)
    {
        int ind = static_cast<int>(i);
        if (ind > _size || ind < 0)
            throw std::exception();
        return (arr[i]);
    }
};

#endif
