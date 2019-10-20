/*
 * Code for week 3 exercises of C++ for Finance.
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

#include "VasicekFunctions.hpp"
#include "BlackScholes.hpp"
#include "Average.hpp"
#include "Integration.hpp"
#include <iostream>

int main() {

    // Exercise 3
    // r0, alpha, mu, sigma
    const VasicekData v_data {0.08, 0.2, 0.1, 0.03};
    const double t {2.0};
    std::cout << "Bond price is: " << VasicekBondPrice(v_data, t) << std::endl;

    // Exercise 4
    // value, strike, maturity, rate, sigma
    const BlackScholes bs_data {20, 25, 0.25, 0.05, 0.24};
    std::cout << "Black-Scholes call price is " << BsCall(bs_data) << std::endl;
    //std::cout << "Black-Scholes put price is " << BsPut(bs_data) << std::endl;

    // Exercise 5
    ArithmeticMean();
    //GeometricMean();

    // Exercise 6
    long integ_n {100};
    double integ_a {1.0};
    double integ_b {2.0};
    std::cout << "Numerical integral of f1 (trap):\t" << integrals::trapezium_f1(integ_a, integ_b, integ_n) << std::endl;
    std::cout << "Numerical integral of f1 (Simp):\t" << integrals::simpsons_f1(integ_a, integ_b, integ_n) << std::endl;
    std::cout << "Actual integral of f1:\t\t\t" << integrals::i1(integ_a, integ_b) << std::endl;
    std::cout << "Numerical integral of f2 (trap):\t" << integrals::trapezium_f2(integ_a, integ_b, integ_n) << std::endl;
    std::cout << "Numerical integral of f2 (Simp):\t" << integrals::simpsons_f2(integ_a, integ_b, integ_n) << std::endl;
    std::cout << "Actual integral of f2:\t\t\t" << integrals::i2(integ_a, integ_b) << std::endl;

    return 0;
}

