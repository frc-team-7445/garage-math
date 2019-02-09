#pragma once

#include <garage_math/matrix.hpp>
#include <garage_math/vector.hpp>

namespace garage {
    namespace math {
        template<typename T>
        int sign(const T value) {
            if (value > T(0)) return 1;
            else if (value < T(0)) return -1;
            else return 0;
        }

        template<typename T>
        double map(const T input, const T lowerInput, const T upperInput, const T lowerOutput, const T upperOutput) {
            return lowerOutput + (upperOutput - lowerOutput) * ((input - lowerInput) / (upperInput - lowerInput));
        }
    }
}