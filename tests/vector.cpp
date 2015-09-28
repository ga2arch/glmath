#include "vector.h"
#include "catch.hpp"

using namespace glmath::vector;

SCENARIO( "vectors manipulation", "[vector]" ) {

    GIVEN( "two vector with some items" ) {
        
        Vec4 v1(0.0f,1.1f,2.0f,3.0f);
        Vec4 v2(3.0f,2.0f,1.1f,0.0f);
        
        REQUIRE( v1.size() == 4 );
        REQUIRE( v2.size() == 4 );
        
        WHEN( "you compute the dot product" ) {
            float product = v1.dot(v2.xyzw());
            
            THEN( "the result is the sum of the mul of each coord" ) {
                float t = 0.0f*3.0f
                        + 1.1f*2.0f
                        + 2.0f*1.1f
                        + 3.0f*0.0f;

                REQUIRE( product == t );
                
            }
        }
        
        WHEN( "you compute the cross product" ) {
            auto v3 = v1.xyz().cross(v2.xyz());
            
            v3.x(5.0f);
            
            THEN( "you get a new vector" ) {

                REQUIRE( v3.x() == Catch::Detail::Approx(5.0f) );
                REQUIRE( v3.y() == Catch::Detail::Approx(6.0f) );
                REQUIRE( v3.z() == Catch::Detail::Approx(-3.3f) );

            }
        }
        
    }
}
