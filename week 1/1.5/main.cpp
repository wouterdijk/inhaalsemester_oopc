// example:
// a rectangle object that is contains four line objects

#include "hwlib.hpp"
#include "fill.hpp"

int main(int argc, char **argv){
    
   // the window in which we want to print the line
   hwlib::target::window w( hwlib::xy( 128, 64 ));    
    
   fill square( w, 25, 20, 45, 40 );
   square.print();
   fill square1( w, 5, 10, 20, 60 );
   square1.print();
   fill square2( w, 45, 45, 60 , 60 );
   square2.print();
   // keep the window around until we close it
   for(;;){ w.poll(); }       
}
