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
