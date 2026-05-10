/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemari <mchemari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 01:47:25 by mchemari          #+#    #+#             */
/*   Updated: 2026/05/10 15:56:17 by mchemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(NULL), _size(0)
{}

template <typename T>
Array<T>::Array(unsigned int size): _array(new T[size]()), _size(size)
{
}

template <typename T>
Array<T>::Array(const Array<T>& other): _array(new T[other._size]()), _size(other._size)
{
    for (size_t i = 0; i < other._size; i++)
        _array[i] = other._array[i];
}

template <typename T>
Array<T>::~Array()
{
    delete [] _array;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
    if (this != &other)
    {
        delete [] _array;
        _size = other._size;
        _array = new T[other._size];
        for (size_t i = 0; i < other._size; i++)
            _array[i] = other._array[i];
    }
    return *this;
}

template <typename T>
T& Array<T>::operator[](int n)
{
    if (n < 0 || static_cast<unsigned int>(n) >= _size)
    {
        std::cout << n << std::endl;

        throw Array::IsOutOfBounds();
    }
    return _array[n];
}

template <typename T>
unsigned int Array<T>::size() const
{
    return _size;
}

#endif