#include <iostream>
#include "CafeaComandata.hpp"

void printLines(){
    std::cout<<"--------------------------------------------------------------\n";
}

void demonstratie(){
    CafeaComandata c1(25, {"Lapte", "Cafea", "Pumpkin spice", "Scortisoara"}, "Serveste cu scortisoara extra", "Pumpkin Spice Latte");
    std::cout << "Primul obj cafea" << std::endl;
    c1.display();
    printLines();

    //FOLOSIRE COPY CONSTRUCTOR
    CafeaComandata c2 = c1;
    std::cout << "Copie nealterata" << std::endl;
    c2.display();
    printLines();


    //modificare copie si observarea starii obiectului copiat/originalului
    c2.setCafea("Ceva de la Starbucks");
    c2.setDiverse("Fara zahar");
    std::cout << "Copia modificata:" << std::endl;
    c2.display();
    printLines();

    std::cout << "Originalul" << std::endl;
    c1.display();
    printLines();


    //FOLOSIRE MOVE CONSTRUCTOR
    CafeaComandata c3 = std::move(c1);
    std::cout << "Obiectul mutat:" << std::endl;
    c3.display();
    printLines();

    std::cout << "Obiectul original dupa mutare:" << std::endl;
    c1.display();
    printLines();
}

int main(int argc, char** argv){
    demonstratie();

    return 0;
}