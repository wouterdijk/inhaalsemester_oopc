#ifndef DECORATOR_HPP
#define DECORATOR_HPP

#include "hwlib.hpp"

class decorator: public hwlib::pin_in{
private:
    hwlib::pin_in & slave1;
    hwlib::pin_in & slave2;
public:
    decorator(hwlib::pin_in & slave1, hwlib::pin_in & slave2);

    bool read() override;
    void refresh() override;
};

#endif