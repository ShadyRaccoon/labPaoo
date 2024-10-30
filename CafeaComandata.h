//honestly am facut treaba asta pentru ca am aflat de 
//include guards si mi se pare un obicei bun de deprins

#include <list>
#include <string>
#include <string.h>

class CafeaComandata{
private: 
    int pret;
    std::list<std::string> ingrediente;
    char* diverse;
    char* cafea;
public: 
    CafeaComandata(int pret = 10, 
        std::list<std::string> ingrediente = {"apa", "cafea macinata"}, 
        char* diverse = "A se servi fierbinte",
        char* cafea = "Americano");
    CafeaComandata(const CafeaComandata& other);
    CafeaComandata(CafeaComandata&& other);
    ~CafeaComandata();
};