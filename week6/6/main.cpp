#include "hwlib.hpp"
#include "auto.hpp"

int main( void ){	
   
   namespace target = hwlib::target;
   
   auto scl     = target::pin_oc( target::pins::scl );
   auto sda     = target::pin_oc( target::pins::sda );
   auto i2c_bus = hwlib::i2c_bus_bit_banged_scl_sda( scl, sda );
   auto oled    = hwlib::glcd_oled( i2c_bus, 0x3c );  

   // auto w1 = hwlib::part( 
   //    oled, 
   //    hwlib::xy( 0, 0 ),
   //    hwlib::xy( 128, 20));
   // auto w2 = hwlib::part( 
   //    oled, 
   //    hwlib::xy( 0, 20 ),
   //    hwlib::xy( 128, 44));
      
   auto f1 = hwlib::font_default_8x8();
   auto d1 = hwlib::terminal_from( oled, f1 );  
   
   d1 << "\f"
      << "CAR FOR SALE\n" 
      << "=============="<< hwlib::flush;


   car c(oled, 10, 15);
   c.print();
}
