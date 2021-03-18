#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "hwlib.hpp"

class rectangle {
private:
   hwlib::window & w;
   hwlib::line left, right, top, bottom;
public:
   rectangle( hwlib::window & w, int start_x, int start_y, int end_x, int end_y);
   void print();
   void fill_print();
};


#endif // RECTANGLE_HPP
