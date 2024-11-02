#include "CafeaCopyMove.hpp"
#include <iostream>

CafeaCopyMove::CafeaCopyMove(int pret, std::list<std::string> ingrediente, char* diverse, char* cafea){
    this->pret = pret;
    this->ingrediente = ingrediente;

    this->diverse = new char[strlen(diverse) + 1];
    strcpy(this->diverse, diverse);
    
    this->cafea = new char[strlen(cafea) + 1];
    strcpy(this->cafea, cafea);

    std::cout << "Constructor normal apelat!" << std::endl;
}

CafeaCopyMove::CafeaCopyMove(const CafeaCopyMove& other){
    pret = other.pret;
    ingrediente = other.ingrediente;

    diverse = new char[strlen(other.diverse) + 1];
    strcpy(diverse, other.diverse);

    cafea = new char[strlen(other.cafea) + 1];
    strcpy(cafea, other.cafea);
    std::cout << "Copy constructor apelat!" << std::endl;
}

CafeaCopyMove::CafeaCopyMove(CafeaCopyMove&& other){
    this->pret = other.pret;
    this->ingrediente = std::move(other.ingrediente);
    this->diverse = other.diverse;
    this->cafea = other.cafea;

    //lasam obiectul intr-o stare valida
    other.pret = 0;
    other.ingrediente.clear();
    other.diverse = new char[1];
    other.diverse[0] = '\0'; 
    other.cafea = new char[1];
    other.cafea[0] = '\0';

    std::cout << "Move constructor apelat!" << std::endl;
}

CafeaCopyMove::~CafeaCopyMove(){
    delete[] diverse;
    delete[] cafea;

    std::cout << "Destructor apelat!" << std::endl;
}

const int CafeaCopyMove::getPret(){
    return this->pret;
}

const std::list<std::string> CafeaCopyMove::getIngrediente(){
    return this->ingrediente;
}

const char* CafeaCopyMove::getDiverse(){
    return this->diverse;
}

const char* CafeaCopyMove::getCafea(){
    return this->cafea;
}

void CafeaCopyMove::setPret(int Pret){
    this->pret = Pret;
}

void CafeaCopyMove::setIngrediente(std::list<std::string> ingrediente){
    this->ingrediente = ingrediente;
}

void CafeaCopyMove::setDiverse(char* diverse){
    this->diverse = new char[strlen(diverse) + 1];
    strcpy(this->diverse, diverse);
}

void CafeaCopyMove::setCafea(char* cafea){
    this->cafea = new char[strlen(cafea) + 1];
    strcpy(this->cafea, cafea);
}

void CafeaCopyMove::display(){
    std::cout << "Pret: " << this->pret << " lei" << std::endl;
    for(std::string i : this->ingrediente)
        std::cout << i << '|';
    std::cout << std::endl << this->diverse << std::endl;
    std::cout << this->cafea << std::endl;
}