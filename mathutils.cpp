//
// Created by laure on 19/10/2019.
//

#include "mathutils.hpp"
#include <cmath>

namespace mathutils {
    double normal(const double x) {
        return 0.5 * (1 + std::erf(x / std::sqrt(2)));
    }
}