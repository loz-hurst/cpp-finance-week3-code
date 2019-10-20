/*
 * Quadratic function for week 3 exercises of C++ for Finance.
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

#include "Quadratic.hpp"
#include <cmath>
#include <iostream>
#include <ctime>

void FindZ(const long n) {
    const clock_t start_time {std::clock()};
    unsigned int counter {0}; // Increment this every time you find one

    // Fill this in

    const clock_t end_time {std::clock()};
    const clock_t time_delta {end_time - start_time};
    std::cout << "Found " << counter << " values" <<
        "in " << time_delta << " clock ticks" <<
        " (" << time_delta/CLOCKS_PER_SEC << " seconds)" <<
        std::endl;
}