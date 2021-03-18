#ifndef AUTO_HPP
#define AUTO_HPP

#include "rectangle.hpp"

class car {
private:
   hwlib::window & w;
   hwlib::line a,b,c,d,e,f;
   rectangle r;
   hwlib::circle c1,c2;
public:
   car( hwlib::window & w, int start_x, int start_y):
        w(w),
        a( hwlib::xy(10 + start_x, 25 + start_y), hwlib::xy(0 + start_x, 40 + start_y) ),
        b( hwlib::xy(10 + start_x, 25 + start_y), hwlib::xy(20 + start_x, 25 + start_y) ),
        c( hwlib::xy(20 + start_x, 25 + start_y), hwlib::xy(30 + start_x, 10 + start_y) ),
        d( hwlib::xy(30 + start_x, 10 + start_y), hwlib::xy(70 + start_x, 10 + start_y) ),
        e( hwlib::xy(70 + start_x, 10 + start_y), hwlib::xy(75 + start_x, 40 + start_y) ),
        f( hwlib::xy(0 + start_x, 40 + start_y), hwlib::xy(75 + start_x, 40 + start_y) ),
        r( w, 32 + start_x, 12 + start_y, 42 + start_x, 22 + start_y),
        c1( hwlib::xy(start_x + 55, start_y + 40), 5),
        c2( hwlib::xy(start_x + 15, start_y + 40), 5)
   {}


   void print();
};


#endif // AUTO_HPP