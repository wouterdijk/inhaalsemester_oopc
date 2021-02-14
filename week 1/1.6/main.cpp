#include "auto.hpp"

int main(int argc, char **argv){
    
   hwlib::target::window w( hwlib::xy( 256, 64 ));    
    
   car square( w, 10, 10, false);
   square.print();
   car square2( w, 100, 10, true);
   square2.print();
   
   for(;;){ w.poll(); }       
}
