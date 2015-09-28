
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
        
        template <typename T,
        typename = std::enable_if_t<std::is_same<T, float>::value>>
        
        void x(T _x) {
            _data[0] = _x;
        }
        
        const float& x() const {
            return _data[0];
        }
        
        template <typename T,
        typename = std::enable_if_t<(N > 1)
            && std::is_same<T, float>::value>>
        
        void y(T _y) {
            _data[1] = _y;
        }
        
        template <typename T = const float&,
        typename = std::enable_if_t<(N > 1), T>>
        
        T y() const {
            return _data[1];
        }
        
        template <typename T,
        typename = std::enable_if_t<(N > 2)
            && std::is_same<T, float>::value>>
        
        void z(T _z) {
            _data[2] = _z;
        }
        
        template <typename T = const float&,
        typename = std::enable_if_t<(N > 2), T>>
        
        T z() const {
            return _data[2];
        }
        
        template <typename T,
        typename = std::enable_if_t<(N > 3)
            && std::is_same<T, float>::value>>
        
        void w(T _w) {
            _data[3] = _w;
        }
        
        template <typename T = const float&,
        typename = std::enable_if_t<(N > 3), T>>
        
        T w() const {
            return _data[3];
        }
        
        SWIZZLE();
        
        bool operator==(const Vector<N>& v) const {
            return v.data() == _data;
        }
        
        float dot(const Vector<N>& v) const {
            return std::inner_product(_data.begin(),
                                      _data.end(),
                                      v.data().begin(),
                                      0.0f);
        }
        
        Vector<3> cross(const Vector<3>& v) const {
            float a = y() * v.z() - z() * v.y();
            float b = z() * v.x() - x() * v.z();
            float c = x() * v.y() - y() * v.x();

            return {a, b, c};
        }
        
    private:
        std::array<float, N> _data;
    };
    
    using Vec4 = Vector<4>;
    using Vec3 = Vector<3>;
    using Vec2 = Vector<2>;
    using Vec1 = Vector<1>;
    
}}

#endif
