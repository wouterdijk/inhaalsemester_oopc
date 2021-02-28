#ifndef WALL_HPP
#define WALL_HPP

#include "drawable.hpp"
#include "rectangle.hpp"

class wall : public drawable{
private:
    bool filled = true;
    int update_interval;
    int update_count = 0;
    rectangle r;
public:

    wall(hwlib::window & w, const hwlib::xy & location, const hwlib::xy & end, int update_interval , const hwlib::xy & bounce);

    void draw() override;
    void update();

};

#endif