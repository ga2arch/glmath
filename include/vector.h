
#ifndef vector_h_
#define vector_h_

#include <utility>
#include <numeric>
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
        
        Vector(E...e): _data({{ std::forward<E>(e)...}}) {}
        
        size_t size() const {
            return _data.size();
        }
        
        const std::array<float, N>& data() const {
            return _data;
        }
        
        float& x() {
            return _data[0];
        }
        
        template <typename T = float&>
        typename std::enable_if<(N > 1), T>::type
        y() {
            return _data[1];
        }
        
        template <typename T = float&>
        typename std::enable_if<(N > 2), T>::type
        z() {
            return _data[2];
        }
        
        template <typename T = float&>
        typename std::enable_if<(N > 3), T>::type
        w() {
            return _data[3];
        }
        
        SWIZZLE();
        
        bool operator==(const Vector& v) const {
            return v.data() == _data;
        }
        
        float dot(const Vector<N>& v) {
            return std::inner_product(_data.begin(), _data.end(), v.data().begin(), 0.0f);
        }
        
        Vector<3> cross(Vector<3>&& v) {
            float a = y() * v.z() - z() * v.y();
            float b = z() * v.x() - x() * v.z();
            float c = x() * v.y() - y() * v.x();
            
            Vector<3> rv({a, b, c});

            return rv;
        }
        
    private:
        std::array<float, N> _data;
    };
    
}}

#endif
