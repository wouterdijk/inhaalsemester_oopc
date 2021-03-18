#include "decorator.hpp"

int main( void ){	
   
   namespace target = hwlib::target;
   auto led1 = target::pin_out( target::pins::d9 );
   auto led2 = target::pin_out( target::pins::d8 );
   auto led3 = target::pin_out( target::pins::d7 );
   auto led4 = target::pin_out( target::pins::d6 );
   auto led5 = target::pin_out( target::pins::d5 );
   auto led6 = target::pin_out( target::pins::d4 );
   auto led7 = target::pin_out( target::pins::d3 );
   auto led8 = target::pin_out( target::pins::d2 );

   auto links = hwlib::all_from_pin_out_t( led1, led2, led3, led4, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy  );
   auto rechts = hwlib::all_from_pin_out_t( led5, led6, led7, led8, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy );

   auto leds = hwlib::port_out_from( links, rechts );
   hwlib::kitt( leds , 1000);
}


