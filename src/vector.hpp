#pragma once

#include <array>

namespace garage {
    namespace math {
        template<class T=double, int size=3>
        struct vector {
        private:
            std::array<T, size> data;
        public:
            T& x() const {
                return data[0];
            }
            T& y() const {
                return data[1;];
            }
            T& z() const {
                return data[2];
            }
            friend vector operator+(const vector& a, const vector& b) {

            }
            T& operator [](int i) const {
                return data[i];
            }
        };
    }
}
