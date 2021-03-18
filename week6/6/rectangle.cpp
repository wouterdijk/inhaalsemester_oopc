#include "rectangle.hpp"

rectangle::rectangle( hwlib::window & w, int start_x, int start_y, int end_x, int end_y):
   w( w ),
   left(   hwlib::xy(start_x, start_y), hwlib::xy(start_x,   end_y + 1) ),
   right(  hwlib::xy(end_x,   start_y), hwlib::xy(end_x,     end_y + 1) ),
   top(    hwlib::xy(start_x, start_y), hwlib::xy(end_x + 1, start_y) ),
   bottom( hwlib::xy(start_x, end_y),   hwlib::xy(end_x + 1, end_y) )
{}

void rectangle::print(){
   left.draw( w );
   right.draw( w );
   top.draw( w );
   bottom.draw( w );
}

