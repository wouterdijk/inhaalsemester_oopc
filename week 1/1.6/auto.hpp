#ifndef AUTO_HPP
#define AUTO_HPP

#include "line.hpp"
#include "rectangle.hpp"
#include "circle.hpp"

class car {
private:
   hwlib::window & w;
   line a,b,c,d,e,f;
   rectangle r;
   bool open;
   circle c1,c2;
public:
   car( hwlib::window & w, int start_x, int start_y, bool open):
        w(w),
        a( w, 10 + start_x, 25 + start_y, 0 + start_x, 40 + start_y ),
        b( w, 10 + start_x, 25 + start_y, 20 + start_x, 25 + start_y ),
        c( w, 20 + start_x, 25 + start_y, 30 + start_x, 10 + start_y ),
        d( w, 30 + start_x, 10 + start_y, 70 + start_x, 10 + start_y ),
        e( w, 70 + start_x, 10 + start_y, 75 + start_x, 40 + start_y ),
        f( w, 0 + start_x, 40 + start_y, 75 + start_x, 40 + start_y ),
        r( w, 32 + start_x, 12 + start_y, 42 + start_x, 22 + start_y),
        open(open),
        c1( w, start_x + 55, start_y + 40, 5),
        c2( w, start_x + 15, start_y + 40, 5)
   {}


   void print();
};


#endif // AUTO_HPP