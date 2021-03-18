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

   pin_out_invert l5(led5);
   pin_out_invert l6(led6);
   pin_out_invert l7(led7);
   pin_out_invert l8(led8);

   auto blinkers = hwlib::all_from_pin_out_t( led1, led2, led3, led4, l5, l6, l7, l8, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy, hwlib::pin_out_dummy  );

   hwlib::blink( blinkers);
}


