#include "hwlib.hpp"

void working( hwlib::port_out & leds , hwlib::target::pin_in & minder, hwlib::target::pin_in & meer){
   uint_fast16_t bits = 0;
   int nummer = 0;
   for(;;){
      if(minder.read() == false && nummer > 0){
         nummer -= 1;
      }
      if(meer.read() == false && nummer < 8){
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
      }else if(nummer == 5){
         bits = 31;
      }else if(nummer == 6){
         bits = 63;
      }else if(nummer == 7){
         bits = 127;
      }else if(nummer == 8){
         bits = 255;
      }
      leds.write(bits);
      leds.flush();
      hwlib::wait_ms(200);
   }
}


int main( void ){	
  
   namespace target = hwlib::target;

   auto ds   = target::pin_out( target::pins::d9 );
   auto shcp = target::pin_out( target::pins::d10 );
   auto stcp = target::pin_out( target::pins::d11 );
   auto spi  = hwlib::spi_bus_bit_banged_sclk_mosi_miso( 
      stcp, 
      ds, 
      hwlib::pin_in_dummy 
   );
   auto hc595 = hwlib::hc595( spi, shcp );
   
   auto led1 = target::pin_out( target::pins::d7 );
   auto led2 = target::pin_out( target::pins::d6 );
   auto led3 = target::pin_out( target::pins::d5 );
   auto led4 = target::pin_out( target::pins::d4 );
   auto min_knop = target::pin_in( target::pins::d3 );
   auto plus_knop = target::pin_in( target::pins::d2 );

   auto leds = hwlib::port_out_from( hc595.p0, hc595.p3, hc595.p2, hc595.p1, led1, led2, led3, led4 );

   working(leds, min_knop, plus_knop); 
}