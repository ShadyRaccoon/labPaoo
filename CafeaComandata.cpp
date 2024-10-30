#include "CafeaComandata.h"

CafeaComandata::CafeaComandata(int pret = 10, 
        std::list<std::string> ingrediente = {"apa", "cafea macinata"}, 
        char* diverse = "A se servi fierbinte",
        char* cafea = "Americano"){
    this->pret = pret;
    this->ingrediente = ingrediente;
    strcpy(this->diverse, diverse);
    strcpy(this->cafea, cafea);
}

CafeaComandata::CafeaComandata(const CafeaComandata& other){

};

CafeaComandata::CafeaComandata(CafeaComandata&& other){
    
}

CafeaComandata::~CafeaComandata(){

}