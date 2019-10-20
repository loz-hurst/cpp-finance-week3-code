/*
 * Numerical integration functions for week 3 exercises of C++ for Finance.
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

#ifndef WEEK_3_INTEGRATION_HPP
#define WEEK_3_INTEGRATION_HPP

namespace integrals {

    // f1 - x/(1+x^2)
    double f1(double x);
    // i1 - actual integral of f1 between a and b
    double i1(double a, double b);

    // f2 - cos(x)
    double f2(double x);
    // i2 - actual integral of f2 between a and b
    double i2(double a, double b);

    // Approximate integral of f1 between a and b using trapezium method of n parts
    double trapezium_f1(double a, double b, long n);

    // Approximate integral of f1 between a and b using Simpsons' rule method of n parts
    double simpsons_f1(double a, double b, long n);

    // Approximate integral of f2 between a and b using trapezium method of n parts
    double trapezium_f2(double a, double b, long n);

    // Approximate integral of f2 between a and b using Simpsons' rule  method of n parts
    double simpsons_f2(double a, double b, long n);
}

#endif //WEEK_3_INTEGRATION_HPP
