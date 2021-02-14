#include "furniture.hpp"

int main(){
    stool stoel = {5, 2};
    table tafel = {5, 200.0, 250.0};
    furniture meubels = {stoel, stoel, stoel, stoel, tafel};
    meubels.print();
    meubels.makeMoreHipster();
    meubels.print();
}