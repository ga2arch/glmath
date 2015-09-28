#include "vector.h"
#include "catch.hpp"

using namespace glmath::vector;

SCENARIO( "vectors manipulation", "[vector]" ) {

    GIVEN( "two vector with some items" ) {
        
        Vector<4> v1({0.0f,1.1f,2.0f,3.0f});
        Vector<4> v2({3.0f,2.0f,1.1f,0.0f});
        
        Vector<3> v3({3.0f,2.0f,1.1f});
        
        REQUIRE( v1.size() == 4 );
        REQUIRE( v2.size() == 4 );
        
        WHEN( "you compute the dot product" ) {
            float v3 = v1.dot(v2);
            
            THEN( "the result is the sum of the mul of each coord" ) {
                
                REQUIRE( v3 == 4.4f );
                
            }
        }
        
        WHEN( "you compute the cross product" ) {
            Vector<3> v4 = v1.xyz().cross(v2.xyz());
            
            THEN( "you get a new vector" ) {

                REQUIRE( v4.x() == Catch::Detail::Approx(-2.79f) );
                REQUIRE( v4.y() == Catch::Detail::Approx(6.0f) );
                REQUIRE( v4.z() == Catch::Detail::Approx(-3.3f) );

            }
        }
        
    }
}
