#include "stool.hpp"
#include <iostream>

void stool::min_poot(){
    n_legs--;
}

void stool::print_stool(){
    std::cout << n_legs << "  -  " << n_seats << "\n";
}