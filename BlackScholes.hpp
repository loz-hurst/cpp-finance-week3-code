/*
 * Black-Scholes functions for week 3 exercises of C++ for Finance.
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

#ifndef WEEK_3_BLACKSCHOLES_HPP
#define WEEK_3_BLACKSCHOLES_HPP

// structure for variables required to calculate Black-Scholes options
struct BlackScholes {
    double value;
    double strike;
    double maturity;
    double rate;
    double sigma;
};

// Calculate the Black-Scholes call price for the given data
double BsCall(const BlackScholes&);

#endif //WEEK_3_BLACKSCHOLES_HPP
