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
    
};

CafeaComandata::CafeaComandata(CafeaComandata&& other){
    this->pret = other.pret;
    this->ingrediente = std::move(other.ingrediente);
    this->diverse = other.diverse;
    this->cafea = other.cafea;

    this->cafea = nullptr;
    this->diverse = nullptr;
}

CafeaComandata::~CafeaComandata(){
    delete[] diverse;
    delete[] cafea;
}