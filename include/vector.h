
#ifndef vector_h_
#define vector_h_

#include <utility>
#include <iostream>
#include <array>

#include "utils.h"

namespace glmath { namespace vector {
    
    using namespace utils;
    
    template <size_t N>
    class Vector {
        
    public:
        template <typename ...E,
        typename = typename std::enable_if<(sizeof...(E) == N
                                            && N < 5 && N > 0
                                            && are_same<float, E...>::value) >::type>
        
        Vector(E&&...e): _data({{ std::forward<E>(e)...}}) {
        }
        
        const std::array<float, N>& data() const {
            return _data;
        }
        
        float x() {
            return _data[0];
        }
        
        template <typename T = float>
        float y(typename std::enable_if<(N > 1), T>::type* = 0) {
            return _data[1];
        }
        
        template <typename T = float>
        float z(typename std::enable_if<(N > 2), T>::type* = 0) {
            return _data[2];
        }
        
        template <typename T = float>
        float w(typename std::enable_if<(N > 3), T>::type* = 0) {
            return _data[3];
        }
        
        SWIZZLE();
        
    private:
        std::array<float, N> _data;
    };
    
}}

#endif
