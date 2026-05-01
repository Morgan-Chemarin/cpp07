/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemari <mchemari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 01:34:01 by mchemari          #+#    #+#             */
/*   Updated: 2026/05/01 02:37:36 by mchemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stddef.h>
#include <exception>

template <typename T>
class Array
{
    private:
        T *_array;
        size_t _size;
    public:
        Array();
        Array(unsigned int size);
        Array(const Array& other);
        ~Array();

        Array& operator=(const Array& other);
        T& operator[](unsigned int n);

        unsigned int size() const;
};

#include "Array.tpp"

#endif

