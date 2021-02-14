#ifndef FILL_HPP
#define FILL_HPP

#include "hwlib.hpp"

class fill {
private:
   hwlib::window &w;
   int start_x;
   int start_y;
   int end_x;
   int end_y;
public:
   fill( hwlib::window & w, int start_x, int start_y, int end_x, int end_y );
   void print();
};


#endif // FILL_HPP
