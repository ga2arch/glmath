
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
        
        std::array<float, N>& data() {
            return _data;
        }
        
    private:
        std::array<float, N> _data;
    };
    
}}

#endif
