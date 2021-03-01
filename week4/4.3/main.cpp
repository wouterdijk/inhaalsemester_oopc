#include "hwlib.hpp"

void working( hwlib::port_out & leds , hwlib::target::pin_in & minder, hwlib::target::pin_in & meer){
   uint_fast16_t bits = 0;
   int nummer = 0;
   for(;;){
      if(minder.read() == false && nummer > 0){
         nummer -= 1;
      }
      if(meer.read() == false && nummer < 4){
         nummer += 1;
      }

      if(nummer == 0){
         bits = 0;
      }else if(nummer == 1){
         bits = 1;
      }else if(nummer == 2){
         bits = 3;
      }else if(nummer == 3){
         bits = 7;
      }else if(nummer == 4){
         bits = 15;
      }
      leds.write(bits);
      leds.flush();
      hwlib::wait_ms(200);
   }
}


int main( void ){	
  
   namespace target = hwlib::target;
   
   auto led0 = target::pin_out( target::pins::d7 );
   auto led1 = target::pin_out( target::pins::d6 );
   auto led2 = target::pin_out( target::pins::d5 );
   auto led3 = target::pin_out( target::pins::d4 );
   auto min_knop = target::pin_in( target::pins::d3 );
   auto plus_knop = target::pin_in( target::pins::d2 );

   auto leds = hwlib::port_out_from( led0, led1, led2, led3 );

   working(leds, min_knop, plus_knop);
}
