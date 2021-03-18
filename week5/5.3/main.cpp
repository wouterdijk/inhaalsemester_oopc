#include "decorator.hpp"

int main( void ){	
   
   namespace target = hwlib::target;
   auto knop1 = target::pin_in( target::pins::d7 );
   auto knop2 = target::pin_in( target::pins::d6 );
   decorator d(knop1, knop2);


   // Als beide knoppen zijn ingedrukt geeft de applicatie een 1 terug en anders een 0
   for(;;){
      hwlib::cout << d.read();
      hwlib::wait_ms(1000);
   }
}
