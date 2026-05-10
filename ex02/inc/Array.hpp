/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemari <mchemari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 01:34:01 by mchemari          #+#    #+#             */
/*   Updated: 2026/05/10 15:59:10 by mchemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stddef.h>
#include <exception>
#include <iostream>

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
        T& operator[](int n);

        unsigned int size() const;

         class IsOutOfBounds: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Out of Bounds exception");
                }
        };
};

#include "Array.tpp"

#endif

