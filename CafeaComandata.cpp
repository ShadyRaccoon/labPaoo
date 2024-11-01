#include "CafeaComandata.h"
#include <iostream>

CafeaComandata::CafeaComandata(int pret, std::list<std::string> ingrediente, char* diverse, char* cafea){
    this->pret = pret;
    this->ingrediente = ingrediente;

    this->diverse = new char[strlen(diverse) + 1];
    strcpy(this->diverse, diverse);
    
    this->cafea = new char[strlen(cafea) + 1];
    strcpy(this->cafea, cafea);

    std::cout << "Constructor normal apelat!" << std::endl;
}

CafeaComandata::CafeaComandata(const CafeaComandata& other){
    this->pret = other.pret;
    this->ingrediente = other.ingrediente;

    this->diverse = new char[strlen(other.diverse) + 1];
    strcpy(this->diverse, other.diverse);

    this->cafea = new char[strlen(other.cafea) + 1];
    strcpy(this->cafea, other.cafea);
    std::cout << "Copy constructor apelat!" << std::endl;
}

CafeaComandata::CafeaComandata(CafeaComandata&& other){
    this->pret = other.pret;
    this->ingrediente = std::move(other.ingrediente);
    this->diverse = other.diverse;
    this->cafea = other.cafea;


    other.pret = 0;
    other.ingrediente.clear();
    other.cafea = nullptr;
    other.diverse = nullptr;

    std::cout << "Move constructor apelat!" << std::endl;
}

CafeaComandata::~CafeaComandata(){
    delete[] diverse;
    delete[] cafea;

    std::cout << "Destructor apelat!" << std::endl;
}

const int CafeaComandata::getPret(){
    return this->pret;
}

const std::list<std::string> CafeaComandata::getIngrediente(){
    return this->ingrediente;
}

const char* CafeaComandata::getDiverse(){
    return this->diverse;
}

const char* CafeaComandata::getCafea(){
    return this->cafea;
}

void CafeaComandata::setPret(int Pret){
    this->pret = Pret;
}

void CafeaComandata::setIngrediente(std::list<std::string> ingrediente){
    this->ingrediente = ingrediente;
}

void CafeaComandata::setDiverse(char* diverse){
    this->diverse = new char[strlen(diverse) + 1];
    strcpy(this->diverse, diverse);
}

void CafeaComandata::setCafea(char* cafea){
    this->cafea = new char[strlen(cafea) + 1];
    strcpy(this->cafea, cafea);
}

void CafeaComandata::display(){
    std::cout << "Pret: " << this->pret << " lei" << std::endl;
    for(std::string i : this->ingrediente)
        std::cout << i << '|';
    std::cout << std::endl << this->diverse << std::endl;
    std::cout << this->cafea << std::endl;
}