#ifndef VICTIM_HPP
#define VICTIM_HPP

#include "drawable.hpp"
#include "rectangle.hpp"

class victim : public drawable{
private:
    bool hit = false;
    hwlib::xy location;
    hwlib::xy end;
public:

    victim(hwlib::window & w, hwlib::xy location, hwlib::xy end);

    void draw() override;
    void update()override;
    void interact( drawable & other ) override;  

};

#endif