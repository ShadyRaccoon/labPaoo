#include <iostream>
#include "CafeaCopyMove.hpp"
#include "CafeaBase.hpp"

void printLines(){
    std::cout<<"--------------------------------------------------------------\n";
}

void demonstratieCopyMove(){
    CafeaCopyMove c1(25, {"Lapte", "Cafea", "Pumpkin spice", "Scortisoara"}, "Serveste cu scortisoara extra", "Pumpkin Spice Latte");
    std::cout << "Primul obj cafea" << std::endl;
    c1.display();
    printLines();

    //FOLOSIRE COPY CONSTRUCTOR
    CafeaCopyMove c2 = c1;
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
    CafeaCopyMove c3 = std::move(c1);
    std::cout << "Obiectul mutat:" << std::endl;
    c3.display();
    printLines();

    std::cout << "Obiectul original dupa mutare:" << std::endl;
    c1.display();
    printLines();
}

//functie pentru a demonstra nevoia unui de copy si move constructor
void demonstratieNoMove(){
    CafeaBase c1(25, {"Lapte", "Cafea", "Pumpkin spice", "Scortisoara"}, "Serveste cu scortisoara extra", "Pumpkin Spice Latte");
    std::cout << "Primul obj cafea" << std::endl;
    c1.display();
    printLines();

    //FOLOSIRE MOVE CONSTRUCTOR
    //se va face o copie shallow, iar la iesirea din scope se va ajunge la incercarea de a elibera memorie nealocata sau 
    //alocata necorespunzator =>
    /*
    Destructor apelat!
    free(): double free detected in tcache 2
    Aborted (core dumped)
    */
    CafeaBase c2 = std::move(c1);
    std::cout << "Obiectul mutat:" << std::endl;
    c2.display();
    printLines();

    std::cout << "Obiectul original dupa mutare:" << std::endl;
    c1.display();
    printLines();
}

void demonstratieNoCopy(){
    CafeaBase c1(25, {"Lapte", "Cafea", "Pumpkin spice", "Scortisoara"}, "Serveste cu scortisoara extra", "Pumpkin Spice Latte");
    std::cout << "Obiect original c1:\n";
    c1.display();
    printLines();

    CafeaBase c2 = c1;
    std::cout << "Copia lui c1 c2:\n";
    c2.display();
    printLines();

    c2.setDiverse("Fara zahar");
    c2.setPret(33);
    std::cout << "Copie modificata c2:\n";
    c2.display();
    printLines();
    std::cout << "Obiect original c1:\n";
    c1.display();
    printLines(); 
}

int main(int argc, char** argv){
    demonstratieCopyMove();
    printLines();
    printLines();

    //IN AMBELE SITUATII LIPSA UNUI CONSTRUCTOR DE MUTARE SAU COPIERE SUPRA SCRIS DUCE LA 
    //free(): double free detected in tcache 2
    //Aborted (core dumped)
    demonstratieNoCopy();
    printLines();
    printLines();
    //demonstratieNoMove();
    return 0;
}