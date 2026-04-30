/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemari <mchemari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 23:40:43 by mchemari          #+#    #+#             */
/*   Updated: 2026/05/01 00:04:17 by mchemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T& first, T& second)
{
    T tmp = second;
    second = first;
    first = tmp;
}

template <typename T>
T min(T& first, T& second)
{
    if (first < second)
        return first;
    return second;
}

template <typename T>
T max(T& first, T& second)
{
    if (first > second)
        return first;
    return second;
}

#endif