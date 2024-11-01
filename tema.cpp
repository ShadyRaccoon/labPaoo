#include <iostream>
#include "CafeaComandata.h"

int main(int argc, char** argv){
    CafeaComandata c1(25, {"Lapte", "Cafea", "Pumpkin spice", "Scortisoara"}, "Serveste cu scortisoara extra", "Pumpkin Spice Latte");
    std::cout << "Primul obj cafea" << std::endl;
    c1.display();

    //FOLOSIRE COPY CONSTRUCTOR
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

    //FOLOSIRE MOVE CONSTRUCTOR
    CafeaComandata c3 = std::move(c1);
    std::cout << "Obiectul mutat:" << std::endl;
    c3.display();

    std::cout << "Obiectul original dupa mutare:" << std::endl;
    c1.display();

    return 0;

}