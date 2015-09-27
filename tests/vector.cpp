#include "vector.h"
#include "catch.hpp"

using namespace glmath::vector;

SCENARIO( "vectors manipulation", "[vector]" ) {

    GIVEN( "a vector with some items" ) {
        
        Vector<4> vec({0.0f,1.1f,2.0f,3.0f});
        
        Vector<4> v1({3.0f,2.0f,1.1f,0.0f});
        
        Vector<2> vec2({0.0f, 1.1f});
        Vector<2> vec3 = vec.xy();
        
        REQUIRE( vec.data().size() == 4 );
        
    }
}
