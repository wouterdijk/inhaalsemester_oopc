#ifndef DECORATOR_HPP
#define DECORATOR_HPP

#include "hwlib.hpp"

class pin_out_invert : public hwlib::pin_out{
private:
    hwlib::pin_out & slave;
public:
    pin_out_invert(hwlib::pin_out & slave);

    void write(bool x) override;
    void flush() override;       
};

#endif