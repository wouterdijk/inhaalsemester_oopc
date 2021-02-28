#include "victim.hpp"

victim::victim(hwlib::window & w, hwlib::xy location, hwlib::xy end):
    drawable( w, location, end - location),
    location( location ),
    end( end )
{}

void victim::draw(){
    hwlib::line( hwlib::xy( location.x, location.y ), hwlib::xy( location.x,   end.y + 1    )).draw( w );
    hwlib::line( hwlib::xy( end.x,      location.y ), hwlib::xy( end.x,        end.y + 1    )).draw( w );
    hwlib::line( hwlib::xy( location.x, location.y ), hwlib::xy( end.x + 1,    location.y   )).draw( w );
    hwlib::line( hwlib::xy( location.x, end.y      ), hwlib::xy( end.x + 1,    end.y        )).draw( w );
}

void victim::update(){
    if(hit && location.x < end.x){
        location.x++;
        location.y++;
        end.x--;
        end.y--;
    }
}


void victim::interact( drawable & other ){
    if( this != & other){
        if( overlaps( other )){
            hit = true;
        }
    }
} 