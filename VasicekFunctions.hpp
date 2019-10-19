/*
 * Vasicek functions for week 3 exercises of C++ for Finance.
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

#ifndef WEEK_3_VASICEKFUNCTIONS_HPP
#define WEEK_3_VASICEKFUNCTIONS_HPP

// structure for variables required to calculate Vasicek bonds
struct VasicekData {
    double r0;
    double alpha;
    double mu;
    double sigma;
};

/*
 * Calculate and return the bond price at time 0
 * Arguments:
 *   data - parameters for the bond
 *   T - maturity time
 */
double VasicekBondPrice(VasicekData data, double T);

/*
 * Utility function to calculate part of the bond price
 * Arguments:
 *   data - Vasicek bond data
 *   T - maturity time
 */
double A(VasicekData data, double T);

/*
 * Utility function to calculate part of the bond price
 * Arguments:
 *   data - Vasicek bond data
 *   T - maturity time
 */
double B(VasicekData data, double T);

#endif //WEEK_3_VASICEKFUNCTIONS_HPP
