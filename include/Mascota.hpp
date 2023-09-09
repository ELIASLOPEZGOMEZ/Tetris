#include <string>
#include <iostream>

class Mascota
{
private:
    int vida;
    std::string nombre;

public:
    Mascota()
    {
        this->vida = 100;
    }
    void EstablecerNombre(std::string nombre)
    {
        this->nombre = nombre;
    }
    ~Mascota() {}
    void DecirNombre()
    {
        std::cout << "Mi mombre es:" << this->nombre << std ::endl;
    }
};
