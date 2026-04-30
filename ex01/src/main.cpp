/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemari <mchemari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 00:14:23 by mchemari          #+#    #+#             */
/*   Updated: 2026/05/01 00:42:44 by mchemari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void printElement(const T& element)
{
    std::cout << element << " ";
}

void incrementInt(int& n)
{
    n += 1;
}

void toUpperCase(std::string& str)
{
    for (size_t i = 0; i < str.length(); i++)
        str[i] = std::toupper(str[i]);
}

int main()
{
    std::cout << "--- TEST 1: Array of Ints ---" << std::endl;
    int intArray[] = { 1, 2, 3, 4, 5 };
    std::size_t intLen = sizeof(intArray) / sizeof(intArray[0]);
    std::cout << "Original: ";
    ::iter(intArray, intLen, printElement<int>);
    std::cout << std::endl;
    ::iter(intArray, intLen, incrementInt);
    std::cout << "Modified: ";
    ::iter(intArray, intLen, printElement<int>);
    std::cout << "\n\n";


    std::cout << "--- TEST 2: Array of std::string ---" << std::endl;
    std::string strArray[] = { "hello", "world", "42" };
    std::size_t strLen = sizeof(strArray) / sizeof(strArray[0]);
    std::cout << "Original: ";
    ::iter(strArray, strLen, printElement<std::string>);
    std::cout << std::endl;
    ::iter(strArray, strLen, toUpperCase);
    std::cout << "Modified: ";
    ::iter(strArray, strLen, printElement<std::string>);
    std::cout << "\n\n";


    std::cout << "--- TEST 3: Const Array ---" << std::endl;
    const float floatArray[] = { 42.42f, 21.21f, 84.84f };
    std::size_t floatLen = sizeof(floatArray) / sizeof(floatArray[0]);
    std::cout << "Const elements: ";
    ::iter(floatArray, floatLen, printElement<float>);
    std::cout << std::endl;

    return 0;
}