#pragma once

#include <array>

namespace garage {
    namespace math {
        template<class T=double, int width=3, int height=3>
        struct matrix {
        private:
            std::array<std::array<T, width>, height> elements;
        public:

        };
    }
}