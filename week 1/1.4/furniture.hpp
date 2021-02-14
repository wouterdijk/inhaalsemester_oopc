#ifndef FURNITURE_HPP
#define FURNITURE_HPP

#include "stool.hpp"
#include "table.hpp"


class furniture{
private:
    stool stool1;
    stool stool2;
    stool stool3;
    stool stool4;
    table table1;

public:

    furniture(
        stool stool1,
        stool stool2, 
        stool stool3,
        stool stool4,
        table table1):

        stool1(stool1),
        stool2(stool2),    
        stool3(stool3),
        stool4(stool4),
        table1(table1)
    {}

    void makeMoreHipster();
    void print();
};

#endif // FURNITURE_HPP