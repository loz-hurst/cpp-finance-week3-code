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

#include "BlackScholes.hpp"
#include "mathutils.hpp"
#include <cmath>

double BsCall(const BlackScholes &data)
{
    // Using formula C(St,t)=N(d1)St - N(d2)PV(K)

    // This value gets used a couple of times, so calculate it once
    double sig_sqrt_t = data.sigma*std::sqrt(data.maturity);

    // PV(K)
    double pv_k = data.strike*std::exp(-data.rate*data.maturity);

    // d1
    double d1 = (std::log(data.value/data.strike) + (data.rate + 0.5*data.sigma*data.sigma) * data.maturity)/sig_sqrt_t;

    // d2
    double d2 = d1 - sig_sqrt_t;

    // Normal values
    double n1 = mathutils::normal(d1);
    double n2 = mathutils::normal(d2);

    return data.value*n1 - pv_k*n2;
}