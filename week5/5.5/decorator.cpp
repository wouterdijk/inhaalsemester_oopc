#include "decorator.hpp"

pin_out_invert::pin_out_invert(hwlib::pin_out & slave):
    slave(slave)
{}

void pin_out_invert::write(bool x){
    slave.write(! x);
}

void pin_out_invert::flush(){
    slave.flush();
}