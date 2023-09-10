#include <iostream>
#include <Mascota.hpp>
int main()
{
    std::cout << "Juego de Mascota" << std::endl;

    Mascota m1, m2, m3;

    m1.EstablecerNombre("pedro");
    m2.EstablecerNombre("pancho");
    m3.EstablecerNombre("Pepe");

    m1.DecirNombre();
    m2.DecirNombre();
    m3.DecirNombre();
    return 0;
}