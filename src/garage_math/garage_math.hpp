#pragma once

#include <garage_math/matrix.hpp>
#include <garage_math/vector.hpp>

#include <cmath>

namespace garage {
    namespace math {
        template<typename T>
        int sign(const T value) {
            if (value > T(0)) return 1;
            else if (value < T(0)) return -1;
            else return 0;
        }

        template<typename T>
        T map(const T input, const T lowerInput, const T upperInput, const T lowerOutput, const T upperOutput) {
            return lowerOutput + (upperOutput - lowerOutput) * ((input - lowerInput) / (upperInput - lowerInput));
        }

        template<typename T>
        T clamp(const T value, const T lower, const T upper) {
            return value <= lower ? lower : value >= upper ? upper : value;
        }

        template<typename T>
        T absolute(const T value) {
            return value < T(0) ? -value : value;
        }

        template<typename T>
        T threshold(const T value, const T threshold) {
            return absolute(value) > threshold ? value : T(0);
        }

        template<typename T>
        bool withinRange(const T value, const T target, const T threshold) {
            return absolute(target - value) < threshold;
        }

        template<typename T>
        T axis(const bool positiveInput, const bool negativeInput) {
            return (positiveInput ? T(1) : T(0) + negativeInput ? T(-1) : T(0));
        }

        inline double fixAngle(double angle) {
            angle = std::fmod(angle, 360.0);
            if (absolute(angle) > 180.0) {
                angle = (angle > 0) ? (angle - 360.0) : (angle + 360.0);
            }
            return angle;
        }
    }
}