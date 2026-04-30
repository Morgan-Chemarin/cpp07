/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemari <mchemari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 23:40:45 by mchemari          #+#    #+#             */
/*   Updated: 2026/05/01 00:03:37 by mchemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main()
{
    float a = 1.5;
    float b = 5.2;
    
    std::cout << "Before swap: \n | a = " << a << "\n | b = " << b << std::endl;
    ::swap(a, b);
    std::cout << "After swap: \n | a = " << a << "\n | b = " << b << std::endl << std::endl;
    std::cout << "Min of " << a << " and " << b;
    std::cout << ":\n | "<< ::min(a, b) << std::endl;
    std::cout << "Max of " << a << " and " << b;
    std::cout << ":\n | "<< ::max(a, b) << std::endl;
}