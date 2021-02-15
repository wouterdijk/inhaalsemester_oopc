#define CATCH_CONFIG_MAIN 
#include "catch.hpp"

#include "ostream"
#include "vector.hpp"

TEST_CASE( "constructor, two_parameters" ){
   vector v( 3, 4 );
   std::stringstream s;
   s << v;
   REQUIRE( s.str() == "x = 3\ny = 4\n" );   
}

TEST_CASE( "+ met niks erachter" ){
      vector v(1 , 2);
      vector x = + v;
      REQUIRE( x == vector(1 , 2));
}

TEST_CASE( "+" ){
      vector v(1 , 2);
      vector x(2 , 4);
      vector z = v + x;
      REQUIRE( z == vector(3 , 6));
}

TEST_CASE( "+=" ){
      vector v(6 , 8);
      vector x(7 , 2);
      x += v;
      REQUIRE( x == vector(13 , 10));
}

TEST_CASE( "* begint met int" ){
      vector v(3 , 4);
      int a = 7;
      vector x = a * v;
      REQUIRE( x == vector(21 , 28));
}

TEST_CASE( "* begint met vector" ){
      vector v(1 , 2);
      int a = 5;
      vector x = v * a;
      REQUIRE( x == vector(5 , 10));
}

TEST_CASE( "*=" ){
      vector v(2, 3);
      int a = 4;
      v *= a;
      REQUIRE( v == vector(8 , 12));
}
