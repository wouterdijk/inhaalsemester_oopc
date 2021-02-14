#include "table.hpp"
#include <iostream>

void table::plus_poot(){
    n_legs += 4;
}

void table::print_table(){
    std::cout << n_legs << "  -  " << length << "  -  " << width << "\n";
}