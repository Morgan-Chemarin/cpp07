/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemari <mchemari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 00:14:25 by mchemari          #+#    #+#             */
/*   Updated: 2026/05/10 15:32:41 by mchemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T>
void iter(T* array, const std::size_t length, void (*f)(T&))
{
    if (!array || !f)
        return;
    for (std::size_t i = 0; i < length; i++)
        f(array[i]);
}

template <typename T>
void iter(T* array, const std::size_t length, void (*f)(const T&))
{
    if (!array || !f)
        return;
    for (std::size_t i = 0; i < length; i++)
        f(array[i]);
}

#endif