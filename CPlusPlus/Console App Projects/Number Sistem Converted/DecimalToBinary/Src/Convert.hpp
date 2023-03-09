#pragma once

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>

namespace Converter
{
    void DecimalToBinary()
    {
        int decimal[10];
        int number;
        int i;

        std::cout << "Enter decimal number: ";
        std::cin >> number;

        for (i = 0; number > 0; i++)
        {
            decimal[i] = number % 2;

            number /= 2;
        }

        std::cout << "Binary number: ";

        for (i = i - 1; i >= 0; i--)
        {
            std::cout << decimal[i];
        }
    }
}

#endif