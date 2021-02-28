#include <hwlib.hpp>
#include <array>
#include "ball.hpp"
#include "line.hpp"
#include "wall.hpp"
#include "victim.hpp"

int main(){
   hwlib::target::window w( hwlib::xy( 128, 64 ), hwlib::white, hwlib::black, 2 );

   wall top( w, hwlib::xy(   0,  0 ), hwlib::xy( 127,  4 ), 2, hwlib::xy(1 , -1));
   wall right( w, hwlib::xy( 123,  0 ), hwlib::xy( 127, 63 ), 2, hwlib::xy(-1 , 1));
   wall bottom( w, hwlib::xy(   0, 59 ), hwlib::xy( 127, 63 ), 2, hwlib::xy(1 , -1));
   wall left( w, hwlib::xy(   0,  0 ), hwlib::xy(   4, 63 ), 2, hwlib::xy(-1 , 1));
   ball b( w, hwlib::xy( 50, 20 ), 9, hwlib::xy( 5, 2 ) );
   victim v( w, hwlib::xy(   100,  10 ), hwlib::xy( 120,  25 ));
   
   std::array< drawable *, 6 > objects = { &b, &top, &left, &right, &bottom, &v};
   

   for(;;){
      w.clear();
      for( auto & p : objects ){
         p->draw();
      }
      w.flush();
      hwlib::wait_ms( 200 );
      for( auto & p : objects ){
          p->update();
      }
      for( auto & p : objects ){
         for( auto & other : objects ){
            p->interact( *other );
         } 
      }
   }
}

