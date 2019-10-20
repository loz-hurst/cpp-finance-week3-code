/*
 * Average functions for week 3 exercises of C++ for Finance.
 *
 * Copyright 2019 Laurence Alexander Hurst
 *
 * This file is part of C++ for Finance.
 *
 *     C++ for Finance is free software: you can redistribute it and/or modify
 *     it under the terms of the GNU General Public License as published by
 *     the Free Software Foundation, either version 3 of the License, or
 *     (at your option) any later version.
 *
 *     C++ for Finance is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU General Public License for more details.
 *
 *     You should have received a copy of the GNU General Public License
 *     along with Foobar.  If not, see <https://www.gnu.org/licenses/>.
 *
 * See the file LICENCE in the original source code repository for the
 * full licence.
 */

#include "Average.hpp"
#include <iostream>

void ArithmeticMean() {
    int n {0};

    std::cout << "How many values to average?: ";
    std::cin >> n;

    double sum {0};
    for(int i {0}; n > i; ++i)
    {
        std::cout << "Enter a number: ";
        double x {0};
        std::cin >> x;
        sum += x;
    }
    std::cout << "Average is " << sum/n << std::endl;
}
