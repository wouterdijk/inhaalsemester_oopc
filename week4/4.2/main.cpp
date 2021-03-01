#include "hwlib.hpp"

void write_flush(hwlib::target::pin_out & pin, int x){
   pin.write(x);
   pin.flush();   
}


int main( void ){	
  
   namespace target = hwlib::target;
   
   auto led0 = target::pin_out( target::pins::d7 );
   auto led1 = target::pin_out( target::pins::d6 );
   auto led2 = target::pin_out( target::pins::d5 );
   auto led3 = target::pin_out( target::pins::d4 );
   
   while(1){
      write_flush(led0, 1);
      write_flush(led1, 1);
      hwlib::wait_ms(1000);

      write_flush(led0, 0);
      write_flush(led2, 1);
      hwlib::wait_ms(1000);

      write_flush(led1, 0);
      write_flush(led3, 1);
      hwlib::wait_ms(1000);

      write_flush(led3, 0);
      write_flush(led1, 1);
      hwlib::wait_ms(1000);

      write_flush(led2, 0);
   }
}
