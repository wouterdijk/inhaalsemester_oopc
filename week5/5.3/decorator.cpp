#include "decorator.hpp"

decorator::decorator(hwlib::pin_in & slave1, hwlib::pin_in & slave2):
    slave1( slave1 ),
    slave2( slave2 )
{}

bool decorator::read(){
    // De functie is nu dat als er 2 nullen binnen komen hij een 1 terug geeft vond ik er beter uit zien voor knoppen. 
    // Als je wil dat als er 2 enen binnen komen hij een 1 terug geeft moet je de 2 uitroeptekens weghalen. 
    if(!slave1.read() && !slave2.read()){
        return true;
    }else{
        return false;
    }
}

void decorator::refresh(){
    slave1.refresh();
    slave2.refresh();
}