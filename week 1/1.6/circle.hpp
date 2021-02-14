#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "hwlib.hpp"

class circle {
private:    
   hwlib::window & w;
   int start_x;
   int start_y;
   int radius;

public:

   circle( hwlib::window & w, int start_x, int start_y, int radius): 
      w( w ),
      start_x(start_x),
      start_y(start_y),
      radius(radius)
   {}

   void print();
};

#endif // CIRCLE_HPP