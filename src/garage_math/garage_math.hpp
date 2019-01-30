#pragma once

#include <garage_math/matrix.hpp>
#include <garage_math/vector.hpp>

namespace garage {
    namespace math {
        template<typename T>
        int sign(const T& value) {
            if (value > T(0)) return 1;
            else if (value < T(0)) return -1;
            else return 0;
        }
    }
}