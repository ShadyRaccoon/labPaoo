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
    const int getPret();
    const std::list<std::string> getIngrediente();
    const char* getDiverse();
    const char* getCafea();

    void setPret(int pret);
    void setIngrediente(std::list<std::string> ingrediente);
    void setDiverse(char* diverse);
    void setCafea(char* cafea);

    void display();
};