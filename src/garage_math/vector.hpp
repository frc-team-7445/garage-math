#pragma once

#include <array>

namespace garage {
    namespace math {
        template<class T=double, int size=3>
        struct vector {
        private:
            std::array<T, size> elements;
        public:
            std::array<T, size>& data() {
                return elements;
            }
            T& x() {
                return elements[0];
            }
            T& y() {
                return elements[1];
            }
            T& z() {
                return elements[2];
            }
            friend vector operator+(const vector& a, const vector& b) {

            }
            T& operator [](int i) const {
                return elements[i];
            }
        };
    }
}
