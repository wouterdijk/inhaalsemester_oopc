#include "auto.hpp"

void car::print(){
    a.print();
    b.print();
    c.print();
    d.print();
    e.print();
    f.print();
    if(open){
        r.print();
    }else{
        r.fill_print();
    };
    c1.print();
    c2.print();

    w.flush();
}