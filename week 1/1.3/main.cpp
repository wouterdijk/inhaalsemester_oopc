#include "hwlib.hpp"
#include "book.hpp"

int main(){

    std::string tekst = "tekst";
    std::string auteur = "auteur";
    std::string titel = "titel";

    book boek( tekst, auteur, titel );

    boek.print();



}