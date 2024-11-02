#include "CafeaBase.hpp"
#include <iostream>

CafeaBase::CafeaBase(int pret, std::list<std::string> ingrediente, char* diverse, char* cafea){
    this->pret = pret;
    this->ingrediente = ingrediente;

    this->diverse = new char[strlen(diverse) + 1];
    strcpy(this->diverse, diverse);
    
    this->cafea = new char[strlen(cafea) + 1];
    strcpy(this->cafea, cafea);

    std::cout << "Constructor normal apelat!" << std::endl;
}

CafeaBase::~CafeaBase(){
    delete[] diverse;
    delete[] cafea;

    std::cout << "Destructor apelat!" << std::endl;
}

const int CafeaBase::getPret(){
    return this->pret;
}

const std::list<std::string> CafeaBase::getIngrediente(){
    return this->ingrediente;
}

const char* CafeaBase::getDiverse(){
    return this->diverse;
}

const char* CafeaBase::getCafea(){
    return this->cafea;
}

void CafeaBase::setPret(int Pret){
    this->pret = Pret;
}

void CafeaBase::setIngrediente(std::list<std::string> ingrediente){
    this->ingrediente = ingrediente;
}

void CafeaBase::setDiverse(char* diverse){
    this->diverse = new char[strlen(diverse) + 1];
    strcpy(this->diverse, diverse);
}

void CafeaBase::setCafea(char* cafea){
    this->cafea = new char[strlen(cafea) + 1];
    strcpy(this->cafea, cafea);
}

void CafeaBase::display(){
    std::cout << "Pret: " << this->pret << " lei" << std::endl;
    for(std::string i : this->ingrediente)
        std::cout << i << '|';
    std::cout << std::endl << this->diverse << std::endl;
    std::cout << this->cafea << std::endl;
}



