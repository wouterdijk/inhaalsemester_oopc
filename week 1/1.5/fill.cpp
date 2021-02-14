#include "fill.hpp"

fill::fill( hwlib::window & w, int start_x, int start_y, int end_x, int end_y ):
    w( w ),
    start_x(start_x),
    start_y(start_y),
    end_x(end_x),
    end_y(end_y)
{}

void fill::print(){
    for(signed int i=start_x ; i < end_x+1 ; i++){
        for(signed int j=start_y ; j < end_y+1 ; j++){        
            w.write( hwlib::xy(i,j) , hwlib::color());
        }
    }
    w.flush();   
}
