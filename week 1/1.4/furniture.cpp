#include "furniture.hpp"

void furniture::makeMoreHipster(){
    stool1.min_poot();
    stool2.min_poot();
    stool3.min_poot();
    stool4.min_poot();
    table1.plus_poot();
}

void furniture::print(){
    stool1.print_stool();
    stool2.print_stool();
    stool3.print_stool();
    stool4.print_stool();
    table1.print_table();
}