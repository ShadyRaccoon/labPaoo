#include <iostream>
#include "CafeaComandata.h"

int main(int argc, char** argv){
    CafeaComandata c1(25, {"Lapte", "Cafea", "Pumpkin spice", "Scortisoara"}, "Serveste cu scortisoara extra", "Pumpkin Spice Latte");
    std::cout << "Primul obj cafea" << std::endl;
    c1.display();

    //folosire copy constructor
    CafeaComandata c2 = c1;
    std::cout << "Copie nealterata" << std::endl;
    c2.display();

    //modificare copie si observarea starii obiectului copiat/originalului
    c2.setCafea("Ceva de la Starbucks");
    c2.setDiverse("Fara zahar");
    std::cout << "Copia modificata:" << std::endl;
    c2.display();
    std::cout << "Originalul" << std::endl;
    c1.display();
    return 0;
}