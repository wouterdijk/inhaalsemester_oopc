#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "line.hpp"

class rectangle {
private:
   hwlib::window & w;
   line left, right, top, bottom;
   int start_x;
   int start_y;
   int end_x;
   int end_y;
public:
   rectangle( hwlib::window & w, int start_x, int start_y, int end_x, int end_y);
   void print();
   void fill_print();
};


#endif // RECTANGLE_HPP
