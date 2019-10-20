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

#include "Integration.hpp"
#include <cmath>
#include <iostream>

namespace integrals {

    double f1(double x) {
        return x/(1+x*x);
    }

    double i1(double a, double b) {
        return 0.5*std::log((1 + b*b)/(1 + a*a));
    }

    double f2(double x) {
        return std::cos(x);
    }

    double i2(double a, double b) {
        return std::sin(b) - std::sin(a);
    }

    double trapezium_f1(const double a, const double b, const long n) {
        double step {(b - a) / (n + 1)};
        double sum {0.0};

        sum += 0.5 * (f1(a) + f1(b));

        for (long i {0}; n > i; ++i) {
            sum += f1(a + (i+1) * step);
        }

        return sum * step;
    }

    double simpsons_f1(const double a, const double b, const long n) {
        if (0==(n % 2))
        {
            std::cerr << "n must be odd for Simpson" << std::endl;
            return 0;
        }

        //fill in the code here

        return 1;
    }

    double trapezium_f2(const double a, const double b, const long n) {
        double step {(b - a) / (n + 1)};
        double sum {0};

        sum += 0.5 * (f2(a) + f2(b));

        for (long i {0}; n > i; ++i) {
            sum += f2(a + (i+1) * step);
        }

        return sum * step;
    }

    double simpsons_f2(const double a, const double b, const long n) {
        if (0==(n % 2))
        {
            std::cerr << "n must be odd for Simpson" << std::endl;
            return 0;
        }

        //fill in the code here

        return 1;
    }
}