#include "circle.hpp"

void circle::print(){
    hwlib::circle circle( (hwlib::xy( start_x, start_y)), radius );
    circle.draw(w);
}