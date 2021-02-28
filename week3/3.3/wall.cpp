#include "wall.hpp"

wall::wall(hwlib::window & w, const hwlib::xy & location, const hwlib::xy & end, int update_interval ):
    drawable( w, location, end - location ),
    update_interval( update_interval ),
    r( w , location.x, location.y, end.x, end.y )
{}

void wall::draw(){
    if(filled){
        r.fill_print();
    }else{
        r.draw();
    }
}


void wall::update(){
    if(update_count == 0){
        if(filled){
            filled = false;
        }else{
            filled = true;
        }
        update_count = update_interval;
    }else{
        update_count-- ;
    }
}