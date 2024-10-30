#include "CafeaComandata.h"

CafeaComandata::CafeaComandata(int pret, std::list<std::string> ingrediente, char* diverse, char* cafea){
    this->pret = pret;
    this->ingrediente = ingrediente;

    this->diverse = new char[strlen(diverse) + 1];
    strcpy(this->diverse, diverse);
    
    this->cafea = new char[strlen(cafea) + 1];
    strcpy(this->cafea, cafea);
}

CafeaComandata::CafeaComandata(const CafeaComandata& other){
    this->pret = other.pret;
    this->ingrediente = other.ingrediente;

    this->diverse = new char[strlen(other.diverse) + 1];
    strcpy(this->diverse, other.diverse);

    this->cafea = new char[strlen(other.cafea) + 1];
    strcpy(this->cafea, other.cafea);
};

CafeaComandata::CafeaComandata(CafeaComandata&& other){
    this->pret = other.pret;
    this->ingrediente = std::move(other.ingrediente);
    this->diverse = other.diverse;
    this->cafea = other.cafea;

    other.cafea = nullptr;
    other.diverse = nullptr;
}

CafeaComandata::~CafeaComandata(){
    delete[] diverse;
    delete[] cafea;
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