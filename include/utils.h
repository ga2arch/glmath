//
//  utils.h
//  engine
//
//  Created by Gabriele Carrettoni on 27/09/15.
//
//

#ifndef utils_h
#define utils_h

#include <type_traits>

namespace glmath { namespace utils {
    
#define SWIZZLExyzw() template <typename T = Vector<4>> Vector<4> xyzw(typename std::enable_if<(N > 3), T>::type* = 0) { Vector<4> v({x(),y(),z(),w()}); return v;} SWIZZLExywz()
#define SWIZZLExywz() template <typename T = Vector<4>> Vector<4> xywz(typename std::enable_if<(N > 3), T>::type* = 0) { Vector<4> v({x(),y(),w(),z()}); return v;} SWIZZLExzyw()
#define SWIZZLExzyw() template <typename T = Vector<4>> Vector<4> xzyw(typename std::enable_if<(N > 3), T>::type* = 0) { Vector<4> v({x(),z(),y(),w()}); return v;} SWIZZLExzwy()
#define SWIZZLExzwy() template <typename T = Vector<4>> Vector<4> xzwy(typename std::enable_if<(N > 3), T>::type* = 0) { Vector<4> v({x(),z(),w(),y()}); return v;} SWIZZLExwyz()
#define SWIZZLExwyz() template <typename T = Vector<4>> Vector<4> xwyz(typename std::enable_if<(N > 3), T>::type* = 0) { Vector<4> v({x(),w(),y(),z()}); return v;} SWIZZLExwzy()
#define SWIZZLExwzy() template <typename T = Vector<4>> Vector<4> xwzy(typename std::enable_if<(N > 3), T>::type* = 0) { Vector<4> v({x(),w(),z(),y()}); return v;} SWIZZLEyxzw()
#define SWIZZLEyxzw() template <typename T = Vector<4>> Vector<4> yxzw(typename std::enable_if<(N > 3), T>::type* = 0) { Vector<4> v({y(),x(),z(),w()}); return v;} SWIZZLEyxwz()
#define SWIZZLEyxwz() template <typename T = Vector<4>> Vector<4> yxwz(typename std::enable_if<(N > 3), T>::type* = 0) { Vector<4> v({y(),x(),w(),z()}); return v;} SWIZZLEyzxw()
#define SWIZZLEyzxw() template <typename T = Vector<4>> Vector<4> yzxw(typename std::enable_if<(N > 3), T>::type* = 0) { Vector<4> v({y(),z(),x(),w()}); return v;} SWIZZLEyzwx()
#define SWIZZLEyzwx() template <typename T = Vector<4>> Vector<4> yzwx(typename std::enable_if<(N > 3), T>::type* = 0) { Vector<4> v({y(),z(),w(),x()}); return v;} SWIZZLEywxz()
#define SWIZZLEywxz() template <typename T = Vector<4>> Vector<4> ywxz(typename std::enable_if<(N > 3), T>::type* = 0) { Vector<4> v({y(),w(),x(),z()}); return v;} SWIZZLEywzx()
#define SWIZZLEywzx() template <typename T = Vector<4>> Vector<4> ywzx(typename std::enable_if<(N > 3), T>::type* = 0) { Vector<4> v({y(),w(),z(),x()}); return v;} SWIZZLEzxyw()
#define SWIZZLEzxyw() template <typename T = Vector<4>> Vector<4> zxyw(typename std::enable_if<(N > 3), T>::type* = 0) { Vector<4> v({z(),x(),y(),w()}); return v;} SWIZZLEzxwy()
#define SWIZZLEzxwy() template <typename T = Vector<4>> Vector<4> zxwy(typename std::enable_if<(N > 3), T>::type* = 0) { Vector<4> v({z(),x(),w(),y()}); return v;} SWIZZLEzyxw()
#define SWIZZLEzyxw() template <typename T = Vector<4>> Vector<4> zyxw(typename std::enable_if<(N > 3), T>::type* = 0) { Vector<4> v({z(),y(),x(),w()}); return v;} SWIZZLEzywx()
#define SWIZZLEzywx() template <typename T = Vector<4>> Vector<4> zywx(typename std::enable_if<(N > 3), T>::type* = 0) { Vector<4> v({z(),y(),w(),x()}); return v;} SWIZZLEzwxy()
#define SWIZZLEzwxy() template <typename T = Vector<4>> Vector<4> zwxy(typename std::enable_if<(N > 3), T>::type* = 0) { Vector<4> v({z(),w(),x(),y()}); return v;} SWIZZLEzwyx()
#define SWIZZLEzwyx() template <typename T = Vector<4>> Vector<4> zwyx(typename std::enable_if<(N > 3), T>::type* = 0) { Vector<4> v({z(),w(),y(),x()}); return v;} SWIZZLEwxyz()
#define SWIZZLEwxyz() template <typename T = Vector<4>> Vector<4> wxyz(typename std::enable_if<(N > 3), T>::type* = 0) { Vector<4> v({w(),x(),y(),z()}); return v;} SWIZZLEwxzy()
#define SWIZZLEwxzy() template <typename T = Vector<4>> Vector<4> wxzy(typename std::enable_if<(N > 3), T>::type* = 0) { Vector<4> v({w(),x(),z(),y()}); return v;} SWIZZLEwyxz()
#define SWIZZLEwyxz() template <typename T = Vector<4>> Vector<4> wyxz(typename std::enable_if<(N > 3), T>::type* = 0) { Vector<4> v({w(),y(),x(),z()}); return v;} SWIZZLEwyzx()
#define SWIZZLEwyzx() template <typename T = Vector<4>> Vector<4> wyzx(typename std::enable_if<(N > 3), T>::type* = 0) { Vector<4> v({w(),y(),z(),x()}); return v;} SWIZZLEwzxy()
#define SWIZZLEwzxy() template <typename T = Vector<4>> Vector<4> wzxy(typename std::enable_if<(N > 3), T>::type* = 0) { Vector<4> v({w(),z(),x(),y()}); return v;} SWIZZLEwzyx()
#define SWIZZLEwzyx() template <typename T = Vector<4>> Vector<4> wzyx(typename std::enable_if<(N > 3), T>::type* = 0) { Vector<4> v({w(),z(),y(),x()}); return v;} SWIZZLExyz()
#define SWIZZLExyz() template <typename T = Vector<3>> Vector<3> xyz(typename std::enable_if<(N > 2), T>::type* = 0) { Vector<3> v({x(),y(),z()}); return v;} SWIZZLExzy()
#define SWIZZLExzy() template <typename T = Vector<3>> Vector<3> xzy(typename std::enable_if<(N > 2), T>::type* = 0) { Vector<3> v({x(),z(),y()}); return v;} SWIZZLEyxz()
#define SWIZZLEyxz() template <typename T = Vector<3>> Vector<3> yxz(typename std::enable_if<(N > 2), T>::type* = 0) { Vector<3> v({y(),x(),z()}); return v;} SWIZZLEyzx()
#define SWIZZLEyzx() template <typename T = Vector<3>> Vector<3> yzx(typename std::enable_if<(N > 2), T>::type* = 0) { Vector<3> v({y(),z(),x()}); return v;} SWIZZLEzxy()
#define SWIZZLEzxy() template <typename T = Vector<3>> Vector<3> zxy(typename std::enable_if<(N > 2), T>::type* = 0) { Vector<3> v({z(),x(),y()}); return v;} SWIZZLEzyx()
#define SWIZZLEzyx() template <typename T = Vector<3>> Vector<3> zyx(typename std::enable_if<(N > 2), T>::type* = 0) { Vector<3> v({z(),y(),x()}); return v;} SWIZZLExy()
#define SWIZZLExy() template <typename T = Vector<2>> Vector<2> xy(typename std::enable_if<(N > 1), T>::type* = 0) { Vector<2> v({x(),y()}); return v;} SWIZZLEyx()
#define SWIZZLEyx() template <typename T = Vector<2>> Vector<2> yx(typename std::enable_if<(N > 1), T>::type* = 0) { Vector<2> v({y(),x()}); return v;}
#define SWIZZLE() SWIZZLExyzw()

    template <typename... List>
    struct are_same;
    
    template <typename X, typename Y, typename...XS>
    struct are_same<X, Y, XS...>: std::false_type {};
    
    template <typename X, typename...XS>
    struct are_same<X, X, XS...>: are_same<X,XS...> {};
    
    template <typename X>
    struct are_same<X, X>: std::true_type {};
    
}}

#endif /* utils_h */
